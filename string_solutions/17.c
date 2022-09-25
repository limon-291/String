//C program to count occurrences of a character in a string:

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
    int count=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==c){
            count++;
        }
    }
    printf("\nTotal occurrences of '%c' :  %d ",c,count);
    return 0;
}
