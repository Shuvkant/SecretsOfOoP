#include <stdio.h>
#include <string.h>
int findCharacterPosition(const char sentence[], char character)
{
    int position = -1;
    int length = strlen(sentence);
    printf("The length of the string is %d\n", length);

    for (int i = 0; i < length; i++)
    {
        if (sentence[i] == character)
        {
            position = i+1;
            break;
        }
    }
    return position;
}
int main()
{
    // const char sentence[] = "idea without execution is worthless";
    char sentence[60];
    printf("Enter the sentence having the character c in it:");
    scanf("%[^\n]s", sentence);
    char character = 'c';
    int position = findCharacterPosition(sentence, character);
    if (position != -1)
    {
        printf("The character '%c' is found at position %d\n", character, position);
    }
    else
    {
        printf("The character '%c' is not found in the sentence\n", character);
    }
    return 0;
}