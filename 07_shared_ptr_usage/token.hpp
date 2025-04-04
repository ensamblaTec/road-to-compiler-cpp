#include<iostream>
#include<string>

enum class TokenType
{
    IDENTIFIER,
    INT_KEYWORD
};

std::string token_type_to_string(TokenType type);

struct Token
{
    TokenType type;
    std::string value;

    void print() const {
        std::cout << "Token("
                  << token_type_to_string(type) << ", "
                  << "\"" << value << "\", "
                  ")\n";
    }
};
