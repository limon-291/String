// Write a C program to find reverse of a string:

#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char str[size];
    gets(str);

    int len;
    len=strlen(str);

    for(int i=len;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}