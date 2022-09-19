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
    
    default:
        /* should never happen */
        fprintf(listing, "Unknown token: %d\n", token);
        break;
    }
}