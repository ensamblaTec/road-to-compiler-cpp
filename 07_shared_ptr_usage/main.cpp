// Tu código va aquí
#include<iostream>
#include<memory>
#include "token.hpp"

int main()
{
    // std::shared_ptr<Token> token1 = {TokenType::INT_KEYWORD, "int"};
    // std::shared_ptr<Token> token2 = {TokenType::IDENTIFIER, "variable1"};
    std::shared_ptr<Token> token1 = std::make_shared<Token>();

    token1->type = TokenType::IDENTIFIER;
    token1->value = "int";

    token1->print();

    return 0;
}
