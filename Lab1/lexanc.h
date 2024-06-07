/*
 * Last modified: 1652, 14/07/17
 */

#ifndef LEXANC_H_
#define LEXANC_H_

typedef short boolean;
#define TRUE 1
#define FALSE 0
#define true 1
#define false 0

#define INT_UNSIGNED_MAX 2147483647

/* -38 and 38 per Prof Novak's Piazza post. -37 and 37 in float.h lib.
 * If using -38/38, change the checks in the if statements in number()
 * to check for <= and >=. For -37/37, change to < and >. */
 #define FLT_MIN_10_EXP -38
 #define FLT_MAX_10_EXP 38
//#define FLT_MIN_10_EXP -37
//#define FLT_MAX_10_EXP 37

/* Arrays containing valid reserved words, operators, and delimiters
 * in Pascal. Used to avoid messy and long switch/if-else statements
 * when checking tokens.
 *
 * Arrays are filled with a " " at the 0th index to maintain compatibility
 * with the defined constants in token.h (and with the printtoken() function
 * in printtoken.c). The 0th index should be removed later. */

static char* reserved[] = {	" ", "array", "begin", "case", "const", "do",
							"downto", "else", "end", "file", "for",
							"function", "goto", "if", "label", "nil",
							"of", "packed", "procedure", "program", "record",
							"repeat", "set", "then", "to", "type",
							"until", "var", "while", "with" };
static int reserved_size = 30;

static char* operators[] = {" ", "+", "-", "*", "/", ":=", "=", "<>", "<", "<=",
							">=", ">", "^", "."};
static int operators_size = 14;

static char* delimiters[] = {" ", ",", ";", ":", "(", ")", "[", "]", ".."};
static int delimiters_size = 9;

#endif /* LEXANC_H_ */
