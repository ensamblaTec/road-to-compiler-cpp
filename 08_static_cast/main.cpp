#include <iostream>
#include <string>

enum class TokenType {
    IDENTIFIER,
    NUMBER,
    PLUS,
    MINUS
};

struct Token {
    TokenType type;
    std::string value;
    int line;
    int column;
};

int main() {
    Token t1 = { TokenType::IDENTIFIER, "x", 1, 1 };
    Token t2 = { TokenType::PLUS, "+", 1, 2 };
    Token t3 = { TokenType::NUMBER, "42", 1, 3 };

    std::cout << "Token type: " << static_cast<int>(t1.type) << ", value: " << t1.value << '\n';
    std::cout << "Token type: " << static_cast<int>(t2.type) << ", value: " << t2.value << '\n';
    std::cout << "Token type: " << static_cast<int>(t3.type) << ", value: " << t3.value << '\n';

    return 0;
}
