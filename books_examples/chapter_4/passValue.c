// #include<iostream>
#include<stdio.h>

void  passValue(int num1, int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("After Swapping\n");
    printf("num1=%d\t num2=%d", num1, num2);
}
int main(){
    int number1, number2;
    printf("Enter two numbers:");
    scanf("%d%d", &number1, &number2);
    printf("Before swapping:\n");
    printf("num1=%d \t num2=%d\n", number1, number2);
    passValue(number1, number2);
}