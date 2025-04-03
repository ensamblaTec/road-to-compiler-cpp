// Tu código va aquí
#include<iostream>
#include<string>

bool isSpace(char character)
{
    return character == 32;
}

bool isNumeric(char character)
{
    return character >= 48 && character <= 57;
}

bool isChar(char character)
{
    return character >= 97 && character <= 122;
}

std::string analiza(char c)
{
    if (isSpace(c)) {
        return "SPACE";
    } else if (isNumeric(c))
    {
        return "NUMERIC";
    } else if (isChar(c))
    {
        return "CHAR";
    } else 
    {
        return "UNKNOWN";
    }
}

int main()
{
    std::string input_character = "this is";

    for (char c: input_character)
        std::cout << c << ": " << analiza(c) << std::endl;

    return 0;
}
