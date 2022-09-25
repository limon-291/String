// Write a C program to find total number of alphabets, 
// digits or special character in a string.

#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char string[size];
    gets(string);

    int alphabet=0;
    int digits=0;
    int spcharacter=0;
    int i=0;

    while(string[i]!='\0'){
        if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z')){
            alphabet++;
        }
        else if(string[i]>='0' && string[i]<='9'){
            digits++;
        }
        else{
            spcharacter++;
        }

        i++;
    }
    printf("\nTotal alphabets in this string : %d",alphabet);
    printf("\nTotal digits in this string : %d",digits);
    printf("\nTotal special characters in this string : %d",spcharacter);

    return 0;

}