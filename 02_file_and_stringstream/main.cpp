// Tu código va aquí
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

int main()
{
    // abrir un fichero de texto
    std::ifstream file("datos.txt");

    if (!file)
    {
        std::cerr << "no se puede abrir el fichero.";
        return 1;
    }

    std::string line;
    int lines = 0;
    std::unordered_map<char, int> alphabetCount;

    while (std::getline(file, line))
    {
        lines++;
        for (char character : line)
        {
            char lower_char = std::tolower(character);
            if (lower_char >= 97 && lower_char <= 122)
                alphabetCount[lower_char]++;
        }
    }

    // std::cout << "line: " << line << std::endl;

    std::cout << "number of lines: " << lines << std::endl;
    for (auto character : alphabetCount)
        std::cout << character.first << ": " << character.second << std::endl;

    file.close();

    return 0;
}