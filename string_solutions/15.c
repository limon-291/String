//C program to find last occurrence of a character in a string:

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
    for(int i=len;i>=0;i--){
        if(str[i]==c){
            index=i;
            break;
        }
    }
    printf("\nFound at %d position ",index);
    
    return 0;
}