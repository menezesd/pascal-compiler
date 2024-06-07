Name:		
Email:		
EID:		
CS Login:	

Lab 3 - Parser for Pascal, Part 3 (graph1.pas and pasrec.pas)
Due 08/08/14 by 2359

Required Files

	Modified/new files
		- lexan.l
		- parse.h
		- parse.y
		- pprint.c
		- printtoken.c
		- symtab.c
		- symtab.h
		- token.h

	Files req'd from /projects/CS375/
		- lexan.h
		- makefile
		- graph1.pas (test file)
		- pasrec.pas (test file)

Changelog (since P2)

	NOTE: even if the changelog indicates no changes, the
		  following files have still been modified from
		  their originals in /projects/CS375 and are
		  required for proper program operation.

	NOTE: any changes made do not affect previous versions;
		  no previous functionality was altered or removed
		  from any of the files (maintains backwards-compatibility).
	
	- lexan.l		: fixed bug where string token's datatype wasn't set
	- parse.h		: none
	- parse.y		: added array/label/pointer/record productions and handlers
					  bugfixes to binop()/makefuncall()/makewhile() due to incorrect behaviour
					  added DB_PRINT_ARGS flag
					  minor updates to all other methods
	- pprint.c		: added auxiliary debug print methods (for proper formatting)
	- printtoken.c	: none
	- symtab.c		: added user labels linked list and handlers
	- symtab.h		: none
	- token.h		: none

Optimizations (if any)

	- arrays of more than one dimension have all their
		row/column/etc references merged into one list
		(e.g., a[i][j] becomes a[i, j])

		- this shortens the length of arrayref() and helps
			implement the optimizations discussed in lecture
			(avoiding multiple nested arefs, smashing constants
			together where possible, etc)

Run Instructions

	1) 	Place all required files into directory

	2)	Run testparser

		3)	Console output is in trivb.out, graph1.out, and pasrec.out

	OR

	2) 	make parser
	
		3) 	parser < [test file]

		OR

		3)	parser
			[manual input]
			...
			^d

Notes
	
	- in parse.h, disable DB_PRINT_ARGS if no printouts
		of the function arguments are desired (saves space);
		arguments will not be printed if DEBUG_MASTER_SWITCH isn't set

	- user labels: instead of using the suggested fixed-size array
		for storing user label numbers, a linked list is used in
		order to theoretically guarantee an infinite number of
		user labels (at the expense of search time, which becomes O(n))

	- an array can only have up to and including "10" dimensions (see arrayref())

Bugs

	- no known program-crashing bugs with pasrec.pas, graph1.pas, and trivb.pas
	- probably a billion other bugs hiding somewhere

TODO

	- add -v (verbose) and -a (print fxn args) flag-handling procedures for command line
	- TOKEN goto_tok in makefor() is not null-checked after creation
	- add full precondition- and error-checking (including debug msgs) to all methods
	- add debug printouts for self-implemented methods
	- see TODOs in parse.y

Other

	- When DEBUG_MASTER_SWITCH is set, calls to other methods within a method are
	  indicated by multiple concurrent "Finished" statements:

	    (246)
		In makeplus(), from arrayref()
		 Arguments:
		   token 7964592  NUM          -12  dtype  0  link 7964400
		   token 7964400  OP             *  dtype  0  link 0  operands 7964496
		   NULL

		(247)
		In makeop(), from makeplus()
		 Arguments:
		  1

		 Finished makeop().
		   token 7964688  OP             +  dtype  0  link 0  operands 0

		 Finished makeplus().
		   token 7964688  OP             +  dtype  0  link 0  operands 7964592

	  In general, any single TOKEN that is printed following a "Finished" statement
	  is the TOKEN being returned by the method.







