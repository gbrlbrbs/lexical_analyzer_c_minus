#include "utils.h"

void print_token(TokenType token, const char *token_string) {
    switch (token)
    {
    case IF:
    case ELSE:
    case WHILE:
    case RETURN:
    case INT:
    case VOID:
        fprintf(listing, "reserved word: %s\n", token_string);
        break;
    case ASSIGN:
        fprintf(listing, "=\n");
        break;
    case LOWER:
        fprintf(listing, "<\n");
        break;
    case LOWER_EQ:
        fprintf(listing, "<=\n");
        break;
    case LARGER:
        fprintf(listing, ">\n");
        break;
    case LARGER_EQ:
        fprintf(listing, ">=\n");
        break;
    case EQUALS:
        fprintf(listing, "==\n");
        break;
    case NOT_EQ:
        fprintf(listing, "!=");
        break;
    case LPAR:
        fprintf(listing, "(\n");
        break;
    case RPAR:
        fprintf(listing, ")\n");
        break;
    case LBRACK:
        fprintf(listing, "[\n");
        break;
    case RBRACK:
        fprintf(listing, "]\n");
        break;
    case LCURLY:
        fprintf(listing, "{\n");
        break;
    case RCURLY:
        fprintf(listing, "}\n");
        break;
    case PLUS:
        fprintf(listing, "+\n");
        break;
    case MINUS:
        fprintf(listing, "-\n");
        break;
    case TIMES:
        fprintf(listing, "*\n");
        break;
    case DIV:
        fprintf(listing, "/\n");
        break;
    case SEMICOL:
        fprintf(listing, ";\n");
        break;
    case COLON:
        fprintf(listing, ",\n");
        break;
    case ENDFILE:
        fprintf(listing, "EOF\n");
        break;
    case NUMBER:
        fprintf(listing, "NUMBER, val=%s\n", token_string);
        break;
    case IDENTIFIER:
        fprintf(listing, "IDENTIFIER, val = %s\n", token_string);
        break;
    case ERROR:
        fprintf(listing, "ERROR: %s\n", token_string);
        break;
    default:
        /* should never happen */
        fprintf(listing, "Unknown token: %d\n", token);
    }
}