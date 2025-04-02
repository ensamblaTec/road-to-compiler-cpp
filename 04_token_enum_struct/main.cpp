// Tu código va aquí
#include <iostream>
#include <string>

enum class TokenType
{
    INT_KEYWORD,
    IDENTIFIER,
    NUMBER,
    EQUAL,
    SEMICOLON,
    END_OF_FILE
};

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

struct Token
{
    TokenType type;
    std::string value;
    int line;
    int column;
};

int main()
{
    // programar manualmente tokens
    Token t1 = Token{
        TokenType::INT_KEYWORD,
        "22",
        1,
        1};

    Token t2 = Token{
        TokenType::IDENTIFIER,
        "varName",
        1,
        1};

    Token t3 = Token{
        TokenType::EQUAL,
        "=",
        1,
        1};

    Token tokens[] = {t1, t2, t3};

    for (const auto &token : tokens)
        std::cout << "Token("
                  << token_type_to_string(token.type) << ","
                  << "\"" << token.value << "\", "
                  << token.line << ", "
                  << token.column << ")\n";

    return 0;
}