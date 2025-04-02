// Tu código va aquí
#include<iostream>
#include "token.hpp"

int main()
{
    Token token1 = { TokenType::INT_KEYWORD, "int", 1, 1};
    Token token2 = { TokenType::IDENTIFIER, "x", 3, 1};

    token1.print();
    token2.print();

    return 0;
}