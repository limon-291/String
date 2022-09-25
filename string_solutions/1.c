// C program to find length of a string: 

// Without using string.h header file and any string library function:

#include<stdio.h>
#define size 100
int main(){
    char string[size];
    gets(string);
    int i=0;
    int count=0;

    while(string[i]!='\0'){
        count++;
        i++;
    }
    printf("\nLength: %d",count);
}



/*


// Using strlen() library function to find length:


#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char string[size];
    gets(string);
    int length;
    length=strlen(string);
    printf("\nLength: %d",length);
}


 */