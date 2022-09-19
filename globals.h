#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#ifndef FALSE
#define FALSE 0
#endif

#ifndef TRUE
#define TRUE 1
#endif

#define MAXRESERVED 8

typedef enum {
    ENDFILE, ERROR,
    IF, ELSE, WHILE, RETURN,
    INT, VOID,
    IDENTIFIER, NUMBER,
    ASSIGN, 
    EQUALS, LOWER, LARGER, LOWER_EQ, LARGER_EQ, NOT_EQ,
    PLUS, MINUS, TIMES, DIV,
    SEMICOL, COLON, RPAR, LPAR, RBRACK, LBRACK, RCOMM, LCOMM
} TokenType;

extern int lineno;
extern FILE* source;
extern FILE* listing;
extern FILE* code;



#endif