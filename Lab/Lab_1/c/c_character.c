#include <iostream>
#include <string>

int findCharacterPosition(const std::string& sentence, char character) {
    int position = -1;
    int index = 0;

    for (char c : sentence) {
        if (c == character) {
            position = index;
            break;
        }
        index++;
    }

    return position;
}

int main() {
    std::string sentence = "idea without execution is worthless";
    char character = 'C';

    int position = findCharacterPosition(sentence, character);

    if (position != -1) {
        std::cout << "The character '" << character << "' is found at position " << position << ".\n";
    } else {
        std::cout << "The character '" << character << "' is not found in the sentence.\n";
    }

    return 0;
}
