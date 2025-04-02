#include "token.hpp"

std::string token_type_to_string(TokenType type)
{
    switch (type)
    {
        case TokenType::INT_KEYWORD:
            return "INT_KEYWORD";
        case TokenType::IDENTIFIER:
            return "IDENTIFIER";
        case TokenType::NUMBER:
            return "NUMBER";
        case TokenType::EQUAL:
            return "EQUAL";
        case TokenType::SEMICOLON:
            return "SEMICOLON";
        case TokenType::END_OF_FILE:
            return "END_OF_FILE";
        default: return "UNKNOWN";
    }
}
