#pragma once

#include<string>
#include<iostream>

enum class TokenType {
    INT_KEYWORD,
    IDENTIFIER,
    NUMBER,
    EQUAL,
    SEMICOLON,
    END_OF_FILE
};

std::string token_type_to_string(TokenType type);

struct Token
{
    TokenType type;
    std::string value;
    int line;
    int column;

    void print() const {
        std::cout << "Token("
                  << token_type_to_string(type) << ", "
                  << "\"" << value << "\", "
                  << line << ", "
                  << column << ")\n";
    }
};
