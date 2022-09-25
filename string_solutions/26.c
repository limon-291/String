// C program to replace last occurrence of a character in a string

#include<stdio.h>
#include<string.h>
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
    for(int i=strlen(str);i>=0;i--){
        if(str[i]==toReplace){
            str[i]=withReplace;
            break;
        }
    }
    printf("\nString after replacing '%c' with '%c'  : %s",toReplace,withReplace,str);
    return 0;
}