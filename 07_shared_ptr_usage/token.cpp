#include "token.hpp"

std::string token_type_to_string(TokenType type)
{
    switch (type)
    {
        case TokenType::INT_KEYWORD:
            return "INT_KEYWORD";
        case TokenType::IDENTIFIER:
            return "IDENTIFIER";
        default: return "UNKNOWN";
    }
}

