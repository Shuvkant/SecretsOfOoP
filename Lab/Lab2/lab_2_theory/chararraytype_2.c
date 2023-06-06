#include<stdio.h>
#include<string.h>
int main(){
    char name[6]={"Hello"};
    int length=strlen(name);
    for(int i=0; i<length; i++){
        printf("name[%d]=%c\n", i, name[i]);
    }
}