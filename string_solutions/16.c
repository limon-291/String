// Write a C program to search all occurrences of a character in given string:

#include<stdio.h>
#include<string.h>
#define sizeMax 100
int main(){
    char str[sizeMax];
    gets(str);
    char c;
    scanf("%c",&c);
    int len;
    len=strlen(str);
    int index;
    printf("\nFound at position :  ");
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
            printf(" %d, ",i);
        }
    }
    return 0;
}
