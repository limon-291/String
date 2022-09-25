// Write a C program to find first 
// occurrence of a character in a given string:


#include<stdio.h>
#include<string.h>
#define sizeMax 100
int main(){
    char str[sizeMax];
    gets(str);
    char c;
    scanf("%c",&c);
    int i=0;
    int index;
    while(str[i]!='\0'){
        if(str[i]==c){
            index=i;
            break;
        }
        i++;
    }
    printf("\nFound at %d position ",index);
    
    return 0;
}