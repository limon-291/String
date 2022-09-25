// C program to copy one string to another string:

// Without using library function: 

#include<stdio.h>
#define sizeMax 100
int main(){
    char str[sizeMax];
    char str2[sizeMax];
    gets(str);

    int i=0;
    while(str[i]!='\0'){
        str2[i]=str[i];
        i++;
    }
    puts(str2);
    return 0;
}

/*

//  using strcpy() library function:

#include<stdio.h>
#include<string.h>
#define sizeMax 100
int main(){
    char str[sizeMax];
    char str2[sizeMax];
    gets(str);

    strcpy(str2,str);
    
    puts(str2);
    return 0;
}

*/
