#include <iostream>
#include <string>

int findCharacterPosition(const std::string& sentence, char character)
{
    int position = -1;
    int length = sentence.length();
    std::cout << "The length of the string is " << length << std::endl;

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == character)
        {
            position = i;
            break;
        }
    }
    return position;
}

int main()
{
    std::string sentence;
    std::cout << "Enter the sentence having the character 'c' in it: ";
    std::getline(std::cin, sentence);
    
    char character = 'c';
    int position = findCharacterPosition(sentence, character);
    if (position != -1)
    {
        std::cout << "The character '" << character << "' is found at position " << position << std::endl;
    }
    else
    {
        std::cout << "The character '" << character << "' is not found in the sentence" << std::endl;
    }
    return 0;
}
