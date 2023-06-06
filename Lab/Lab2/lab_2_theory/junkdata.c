#include <stdio.h>
int main()
{
    int i;
    int number[10];
    for (int j = 0; j <= 9; j++)
    {
        number[j] = j * 10;
    }

    for (i = 0; i <= 9; i++)
    {

        printf("Data[%d]=%d\n", i, number[i]);
    }
    return 0;
}