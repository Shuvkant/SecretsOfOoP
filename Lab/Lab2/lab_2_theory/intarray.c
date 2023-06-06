#include <stdio.h>
#include<string.h>
int main()
{
    int  shortest[] ={3, 4, 5, 6, 77, 8, 9, 12};
	// int length=strlen(shortest);
    int great = shortest[0];
    for (int i = 0; i <8; i++)
    {
        if (shortest[i] > great)
        {
            great = shortest[i];
        }
    }
    printf("The greatest number is %d\n", great);
}          
