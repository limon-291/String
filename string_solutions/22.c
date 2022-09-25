// C program to remove last occurrence of a character from the given string.

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
void removeLast(char *, const char);
int main(){
    char str[MAX_SIZE];
    char toRemove;
    printf("Enter any string: ");
    gets(str);
    printf("Enter character to remove from string: ");
    toRemove = getchar();
    removeLast(str, toRemove);
    printf("String after removing last '%c' : %s", toRemove, str);
    return 0;
}

void removeLast(char * str, const char toRemove){
    int i, lastPosition;
    int len = strlen(str);

    lastPosition = -1;
    i=0;
    while(i<len){
        if(str[i] == toRemove){
            lastPosition = i;
        }

        i++;
    }
    if(lastPosition != -1){
        i = lastPosition;
        while(i<len){
            str[i] = str[i+1];
            i++;
        }
    }
}