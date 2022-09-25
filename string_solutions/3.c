//C program to concatenate two strings:

//without using strcat() library function :

#include<stdio.h>
#define size 100
int main(){
    char string1[size];
    gets(string1);
    char string2[size];
    gets(string2);
    int i=0;
    int j=0;
    while(string1[i]!='\0'){
        i++;
    }
    while(string2[j]!='\0'){
        string1[i]=string2[j];
        i++;
        j++;
    }

    string1[i]='\0';

    printf("\nConcaterated string : %s",string1);
    return 0;

}


/*

  // Using Strcat() Library function: 

#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char string1[size];
    gets(string1);
    char string2[size];
    gets(string2);
    strcat(string1,string2);

    printf("\nConcaterated string : %s",string1);
    return 0;

}


*/