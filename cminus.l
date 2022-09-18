
%{
#include "globals.h"
%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"return" {return RETURN;}
"int" {return INT;}
"void" {return VOID;}
"=" {return ASSIGN;}
"==" {return EQUALS;}
"!=" {return NOT_EQ;}
">" {return LARGER;}
">=" {return LARGER_EQ;}
"<" {return LOWER;}
"<=" {return LOWER_EQ;}
"+" {return PLUS;}
"-" {return MINUS;}
"*" {return TIMES;}
"/" {return DIV;}
";" {return SEMICOL;}
"," {return COLON;}
"(" {return LPAR;}
")" {return RPAR;}
"[" {return LBRACK;}
"]" {return RBRACK;}
"/*" {return LCOMM;}
"*/" {return RCOMM;}
{number} {return NUMBER;}
{identifier} {return IDENTIFIER;}
{newline} {lineno++;}
{whitespace} {} /* do nothing - skip whitespace */
"{" {
    char c;
    do {
        c = input();
        if (c == EOF) break;
        if (c == '\n') lineno++;
    } while (c != '}');
}
. {return ERROR;}
%%