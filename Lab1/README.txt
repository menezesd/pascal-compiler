Name:		
Email:		
EID:		
CS Login:	

Lab 1 - Lexical Analyzer
For 07/17/14

Files Needed

	Modified/new files
		1) lexanc.c
		2) lexanc.h

	Files req'd from /CS375/projects
		1) lexan.h
		2) lexandr.c
		3) printtoken.c
		4) scanner.c
		5) token.h
		6) makefile

Run Instructions

	1) make lexanc
	2) lexanc < [test file]

TODO

	1) Add error checking where noted in the TODOs/comments in lexanc.c?
	2) Remove the empty space (" ") placeholder in the
		delimiters[]/operators[]/reserved[] tables (in lexanc.h) and
		modify the tables in printtoken.c to do the same?

Bugs

	1) No known program-crashing bugs
		a) No segfaults/access violations - checked with valgrind

Other

	1) This program was coded under the (provided) assumption that
		no errors would be present. See the TODOs and comments in
		lexanc.c for places where assumptions were made.


