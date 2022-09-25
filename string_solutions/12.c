// Write a C program to check whether a string is palindrome or not:

#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char str[size];
    gets(str);

    int maxind;
    int firstind;
    int length=strlen(str);
    firstind=0;
    maxind=length-1;

    while(firstind<=maxind){
        if(str[firstind]!=str[maxind]){
            break;
        }
        firstind++;
        maxind--;
    }
    if(firstind>=maxind){
        printf("\nPalindrome.");
    }
    else printf("\nNot Palindrome.");
}