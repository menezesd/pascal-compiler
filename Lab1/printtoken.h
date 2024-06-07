/*
 * printtoken.h
 */

#ifndef PRINTTOKEN_H_
#define PRINTTOKEN_H_

static char* reserved[] = {	"array", "begin", "case", "const", "do",
							"downto", "else", "end", "file", "for",
							"function", "goto", "if", "label", "nil",
							"of", "packed", "procedure", "program", "record",
							"repeat", "set", "then", "to", "type",
							"until", "var", "while", "with" };
static int reserved_size = 29;

static char* operators[] = {"+", "-", "*", "/", ":=", "=", "<>", "<", "<=",
							">=", "^", "."};
static int operators_size = 12;

static char* delimiters[] = {",", ";", ":", "(", ")", "[", "]", ".."};
static int delimiters_size = 8;


#endif /* PRINTTOKEN_H_ */
