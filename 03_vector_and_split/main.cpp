// Tu código va aquí
#include<iostream>
#include<string>
#include<fstream>
#include<vector>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    tokens.reserve(8000);

    size_t start = 0;
    size_t end = str.find(delimiter);

    while (end != std::string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
        end = str.find(delimiter, start);
    }

    tokens.push_back(str.substr(start));
    return tokens;
}

int main() {
    std::vector<std::string> words;
    std::fstream file("datos.txt");

    if (!file) {
        std::cerr << "no se puede abrir el fichero." << std::endl;
        return 1;
    }

    std::string line;

    while (std::getline(file, line)) {
        auto&& tokens = split(line, ' ');
        words.insert(words.end(), tokens.begin(), tokens.end());
    }

    for (auto word: words)
        std::cout << word << std::endl;

    file.close();

    return 0;
}