// Tu código va aquí
#include<iostream>
#include<string>
#include<unordered_map>

int main() {
    std::unordered_map<char, int> alphabet;

    std::string input_text = "this is a example test.";

    for (char character: input_text) {
        char lower_char = std::tolower(character);
        if (lower_char >= 97 && lower_char <= 122)
            alphabet[lower_char]++;
    }

    for (auto cnt_character: alphabet)
        std::cout << cnt_character.first << ": " << cnt_character.second << std::endl;

    return 0;
}