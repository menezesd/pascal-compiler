/* lex1.c         14 Feb 01; 31 May 12       */

/* This file contains code stubs for the lexical analyzer.
   Rename this file to be lexanc.c and fill in the stubs.    */

/* Copyright (c) 2001 Gordon S. Novak Jr. and
   The University of Texas at Austin. */

/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "token.h"
#include "lexan.h"
#include "lexanc.h"

/* Skip whitespace and comments. Moves the stream pointer
 * to right before the next valid character. */
void skipblanks () {
	int c, d;
	boolean done = FALSE;

	while ((c = peekchar()) != EOF &&
			(c == ' ' || c == '\n' || c == '\t' || c == 13 || c == '(' || c == '{')) {

		/* Comment is of the form {}; parse through it. */
		if (c == '{') {
			c = getchar();
			done = FALSE;

			while (!done) {
				c = getchar();
				if (c == EOF) {
					EOFFLG = 1;
					done = TRUE;
				}
				if (c == '}') {
					done = TRUE;
				}
			}
		}

		/* Comment is of the form (**). Check the next character to confirm
		 * that this is actually a comment before parsing through it. */
		if (c == '(' && (d = peek2char()) == '*') {
			getchar();
			getchar();
			done = FALSE;

			while (!done) {
				c = getchar();
				if (c == EOF) {
					EOFFLG = 1;
					done = TRUE;
				}
				if (c == '*' && (d = peekchar()) == ')') {
					getchar();
					done = TRUE;
				}
			}
		}
		else if (c == '(') {
			/* Not a comment. Break. */
			break;
		}

		getchar();
	}

}

/* Get identifiers and reserved words */
TOKEN identifier (TOKEN tok) {
	int c, cclass, i;
	int counter = 0;
	boolean found = FALSE;

	while ((c = peekchar()) != EOF && counter < 15) {
		cclass = CHARCLASS[c];
		if (cclass != ALPHA && cclass != NUMERIC) {
			break;		// should throw an error
		}
		getchar();
		tok->tokenval.tokenstring[counter] = c;

		/* Token may be longer than 15 characters; if it is, parse
		 * through the rest of it. */
		if (counter == 14) {
			c = peekchar();
			cclass = CHARCLASS[c];

			while ((cclass == ALPHA || cclass == NUMERIC) && c != EOF) {	// in loop - add "c != EOF" check?
				getchar();
				c = peekchar();
				cclass = CHARCLASS[c];
			}

			// add EOF check here?

		}

		counter++;
	}
	tok->tokenval.tokenstring[counter] = '\0';

	/* If it's not a RESERVED (determined in the below for loop), then it's an IDENTIFIERTOK. */
	tok->tokentype = IDENTIFIERTOK;

	/* Check if the token is a reserved word. Use FOUND to avoid performing unnecessary checks. */
	i = 0;
	while (i < reserved_size && !found) {
		if ((strcmp(tok->tokenval.tokenstring, reserved[i])) == 0) {
			found = TRUE;
			tok->tokenval.which = i;
			tok->tokentype = RESERVED;
		}
		i++;
	}

	return tok;
}

/* Reads the string starting from the current stream pointer
 * location. Stores the string in the argument TOKEN's
 * tokenstring[] var. Truncates strings if they are greater than
 * 15 characters in length. Returns the TOKEN given in the argument. */
TOKEN getstring (TOKEN tok) {
	int c, d, cclass;
	int counter = 0;

	c = peekchar();
	if (c == '\'') {	// consume the first apostrophe
		getchar();
	}
	else {
		// ????????????????????????????????
	}

	while ((c = peekchar()) != EOF && (d = peek2char()) != EOF && counter < 15) {

//		cclass = CHARCLASS[c];
//		if (c != '\'' && cclass != ALPHA && cclass != NUMERIC) {
//			break;
//		}

		/* Double apostrophe found. */
		if (c == '\'' && d == '\'') {
			getchar();
			getchar();
			tok->tokenval.tokenstring[counter] = '\'';
			counter++;
			continue;
		}
		else if (c == '\'' && d != '\'') {
			/* End of string reached. Break. */
			getchar();
			counter++;
			break;
		}
		else {
			tok->tokenval.tokenstring[counter] = c;
		}

		getchar();

		// should it be looping until it finds the last single apostrophe?
		/* Token may be longer than 15 characters; if it is, parse
		 * through the rest of it. */
		if (counter == 14) {
			c = peekchar();
			d = peek2char();
			while (c != '\'' && d != '\'' && d != EOF) {	// check c != eof?
				getchar();
				c = peekchar();
				d = peek2char();
			}

			// add eof check here?

			getchar();
			getchar();
		}

		counter++;
	}
	tok->tokenval.tokenstring[counter] = '\0';

	tok->tokentype = STRINGTOK;

	return tok;
}

/* Reads the special character(s) starting from the current stream
 * pointer location. Stores it in the argument TOKEN's tokenstring[]
 * var. Returns the TOKEN given in the argument. */
TOKEN special (TOKEN tok) {
	int c, cclass, i;
	int counter = 0;
	int result = 0;
	boolean found = FALSE;

	while ((c = peekchar()) != EOF && (cclass = CHARCLASS[c]) == SPECIAL) {
		getchar();
		tok->tokenval.tokenstring[counter] = c;
		counter++;

		/* These are the only symbols that can be combined with another to form a new symbol. */
		if (c != ':' && c != '<' && c != '>' && c != '.') {
			break;
		}
	}
	tok->tokenval.tokenstring[counter] = '\0';

	/* Check whether or not token is an operator. Use FOUND to avoid performing unnecessary checks. */
	i = 0;
	while (i < operators_size && !found) {
		if ((strcmp(tok->tokenval.tokenstring, operators[i])) == 0) {
			found = TRUE;
			tok->tokenval.which = i;		// PLUS == 261, BIAS == 260
			tok->tokentype = OPERATOR;
		}
		i++;
	}

	/* If token is not an operator, check to see if it's a delimiter.
	 * Use FOUND to avoid performing unnecessary checks. */
	if (!found) {
		i = 0;
		while (i < delimiters_size && !found) {
			if ((strcmp(tok->tokenval.tokenstring, delimiters[i])) == 0) {
				found = TRUE;
				tok->tokenval.which = i;		// COMMA == 280, BIAS == 279
				tok->tokentype = DELIMITER;
			}
			i++;
		}
	}

	if (!found) {
		// ??????????????????????
	}

	return tok;
}

/* Get and convert unsigned numbers of all types. */
/*
 * - unsigned #s must begin with a digit
 * - if there is a decimal point, it must be followed by at least one digit
 * - if a # is followed by a signed decimal exponent, it is FP
 * - convert #s to internal numeric format
 * - detect numeric overflow
 * - anything with E is a float
 * - if error, print msg; return a NUMBERTOK of the correct type (integer or real); value doesn't matter
 */
/* Reads the number(s) starting from the current stream pointer location.
 * If the number is an integer, stores it in the argument TOKEN's intval
 * var. If it is a float, stores it in the argument TOKEN's realval var.
 *
 * Checks for overflow for (unsigned) integers and over-/underflow in floats.
 *
 * Returns the TOKEN given in the argument. */
TOKEN number(TOKEN tok) {
	int c, cclass, cint, d, dclass;
	double num = 0;
	boolean is_real = FALSE;	/* For real numbers (i.e., when the input token has a '.' in it). */
	boolean use_e = FALSE;		/* For when a token represents a number in (scientific) E notation. */
	boolean e_mult = FALSE;		/* Flag used to determine which direction to shift the decimal point. */

	double frac = 0;			/* For the numbers to the right of the decimal place. Is always < 1. */
	double counter = 1;

	int num_insig_figs = 0; 	/* Used when checking for over-/underflow. */

	while ((c = peekchar()) != EOF) {

		cclass = CHARCLASS[c];
		if (cclass != NUMERIC && c != '.' && c != 'e' && c != 'E') {
			break;
		}
		else if (c == 'e' || c == 'E') {
			d = peek2char();
			dclass = CHARCLASS[d];
			if (dclass != NUMERIC && d != '+' && d != '-') {
				break;		// should throw an error
			}

			if (d == '+') {
				getchar();
				e_mult = TRUE;
			}
			else if (d == '-') {
				getchar();
			}
			else if (dclass == NUMERIC) {
				e_mult = TRUE;
			}

//			getchar();
//			c = peek2char();
//			if ((cclass = CHARCLASS[c]) != NUMERIC) {
//printf("\tfuckles; curr d is %c, curr c is %c\n", d, c);
//				break;
//			}

			// CALL "PEEK3CHAR" TO SEE IF AT LEAST ONE DIGIT AFTER PLUS/MINUS SIGN?

			use_e = TRUE;

			/* The number being processed is a float. Since the value of everything
			 * to the right of the decimal point is not computed until after this
			 * loop, and its value is needed before that time, compute it now. */
			if (is_real) {
				double temp = 1;
//printf("hi\n");
				int i;
				for (i = 1; i < counter; i++) {
					temp *= 10;
				}

				num = num + (frac / temp);
				frac = 0;
				counter = 1;
				is_real = FALSE;
			}
		}
		else if (c == '.') {
			d = peek2char();
			if (d == EOF || d == '.' || (dclass = CHARCLASS[d]) != NUMERIC) {
				break;		// should throw an error
			}

			is_real = TRUE;
		}
		else {
			cint = (c - '0');

			if (use_e) {
				frac = frac * 10 + cint;
			}
			else if (is_real) {
				frac = frac * 10 + cint;
				counter++;
				if (num == 0) {
					num_insig_figs++;
				}
			}
			else {
				num = num * 10 + cint;
				num_insig_figs++;
			}

		}

		getchar();
	}

	tok->tokentype = NUMBERTOK;
//printf("frac is %f, num insig figs is %d, use_e is %d\n", frac, num_insig_figs, use_e);
	if (use_e) {
		tok->datatype = REAL;

		/* Ignore insignificant figures when checking for over-/underflow. */
		if ((num_insig_figs - frac) > FLT_MAX_10_EXP ||
				(num_insig_figs - frac) < FLT_MIN_10_EXP) {
//printf("\tin use_e: frac is %f, num insig figs is %d\n", frac, num_insig_figs);
			printf("Floating number out of range\n");
			tok->realval = 0;
		}
		else {
			int i;
			for (i = 0; i < frac; i++) {
				if (e_mult) {
					num *= 10;
				}
				else {
					num /= 10;
				}
			}
			tok->realval = num;
		}

	}
	else if (is_real) {
		tok->datatype = REAL;

		/* Ignore insignificant figures when checking for over-/underflow. */
		if ((num_insig_figs - counter) > FLT_MAX_10_EXP
				|| (num_insig_figs - counter) < FLT_MIN_10_EXP) {		// last test needed?
//printf("\tin is_real: frac is %f, num insig figs is %d\n", frac, num_insig_figs);
			printf("Floating number out of range\n");
			tok->realval = 0;
		}
		else {
			double temp = 1;

			int i;
			for (i = 1; i < counter; i++) {
				temp *= 10;
			}
			tok->realval = num + (frac / temp);
		}

	}
	else {
		tok->datatype = INTEGER;

		if (num > INT_UNSIGNED_MAX) {
			printf("Integer number out of range\n");
			tok->intval = INT_UNSIGNED_MAX;
//			return gettoken();		// enable if don't want out-of-range msg to be printed; disable prev line
		}
		else {
			tok->intval = num;
		}
	}

	return tok;
}
