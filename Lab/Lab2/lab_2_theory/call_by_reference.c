#include<stdio.h>
#include<string.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int num1, num2;
    printf("Ente two numbers:");
    scanf(" %d %d", &num1, & num2);
    printf("Before swapping:\n");
    printf("Num1=%d\nNum2=%d", num1, num2);
    swap(&num1, &num2);
    printf("\nAfter swapping:\n");
    printf("Num1=%d\nNum2=%d", num1, num2);
}