// Write a C program to count total number of words in a string:

#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char str[size];
    gets(str);

    int i=0;
    int word=1;
    while(str[i]!='\0'){
        if(str[i]==' ' || str[i]=='\t' || str[i]=='\n'){
            word++;
        }
        i++;
    }
    printf("\n Total word in this string : %d",word);
    return 0;
}
