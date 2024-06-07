Name:		
Email:		
EID:		
CS Login:	

Lab 2 - Lexical Analyzer Using lex
Due 07/21/14 by 2359

Files Needed

	Modified/new files
		1) lexan.l

	Files req'd from /projects/CS375/
		1) lexan.h
		2) lexanl.c
		3) printtoken.c
		4) token.h
		5) makefile

Modifications made to lexan.l

	- added comment parsing for both single- and multi-line comments
	- added install_str() and install_intgr() routines to handle
		strings and integers, respectively
	- added rules for handling the required reserved words, operators,
		and delimiters, as well as for comments, strings, and integers
	- modified install_fnum() to use strtof() instead of sscanf()
		in order to make use of strtof()'s error-handling capabilities
	- all other methods included in lex2.l left unchanged

Additional things implemented but not required

	- checks for and catches number overflow
	- reserved words and operators are treated as case-insensitive (as
		they are in Pascal)

Run Instructions

	1) 	make lexer
	
	2) 	lexer < [file]

	OR

	2) 	lexer
		3.14
		3.1415927e-40
		64
		fish
		'd0nk3y'
		pRoGrAm
		...
		^d

Questions

	1) How well does the lex program work on the difficult cases of scantst.pas?

		It appears to function correctly for all cases. The output
		for the lexer matches the output found in scantst.sample.

	2) Is it as robust as your hand-written lexical analyzer?

		Based on the output for graph1.pas and scantst.pas, yes. It
		should actually be more robust (see "Additional things implemented").

Bugs

	- no known program-crashing bugs
	- comments cannot be longer than 256 characters in length, including spaces

Other

	- no segfaults/access violations - checked with valgrind
	- tokens are not freed after use (memory leak)
	- see http://flex.sourceforge.net/manual/Start-Conditions.html#Start-Conditions
		for more info on start conditions (used for parsing multi-line comments)









