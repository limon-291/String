// C program to replace first occurrence of a character in a string:

#include<stdio.h>
#define size 100
int main(){
    char str[size];
    gets(str);
    char toReplace;
    printf("\n");
    toReplace=getchar();

    getchar();
    
    char withReplace;
    printf("\n");
    withReplace=getchar();
    int i=0;

    while(str[i]!='\0'){
        if(str[i]==toReplace){
            str[i]=withReplace;
            break;
        }
        i++;
    }
    printf("\nString after replacing '%c' with '%c'  : %s",toReplace,withReplace,str);
    return 0;
}