/*This program verifies that function can be declared anywhere
 outside the main function*/


#include<stdio.h>
void multiplication_table(int number);
int main()
{
    int number1;
    printf("Enter the number:");
    scanf("%d", &number1);
    multiplication_table(number1);
return 0;
}

void multiplication_table(int number ){
    int i;
    for(i=1; i<=10; i++){
        printf("%d*%2d=%2d\n",number, i, number*i );
    }
}