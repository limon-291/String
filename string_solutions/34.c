// C program to trim leading white spaces from a string


#include <stdio.h>
#define MAX_SIZE 100 
void trimLeading(char * str);
int main(){
    char str[MAX_SIZE];

    printf("Enter any string: ");
    gets(str);
    printf("\nString before trimming leading whitespace: \n%s", str);
    trimLeading(str);
    printf("\n\nString after trimming leading whitespace: \n%s", str);
    return 0;
}
void trimLeading(char * str){
    int index, i, j;

    index = 0;
    while(str[index] == ' ' || str[index] == '\t' || str[index] == '\n'){
        index++;
    }

    if(index != 0){
        i = 0;
        while(str[i + index] != '\0')
        {
            str[i] = str[i + index];
            i++;
        }
        str[i] = '\0';
    }
}