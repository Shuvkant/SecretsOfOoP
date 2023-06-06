#include <stdio.h>
int main()
{
    int num;
    int *nump;
    printf("Enter the numbe:");
    scanf("%d", &num);
    nump = &num;
    printf("The number is %d", num);
    printf("\nthe number is %d", *nump);
    return 0;
}

