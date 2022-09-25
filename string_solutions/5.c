// C program to convert lowercase string to uppercase: 

//without using strupr() library function:


#include<stdio.h>
#define size 100
int main(){
    char string[size];
    gets(string);
    int i=0;
    while(string[i]!='\0'){
        if(string[i]>='a' && string[i]<='z'){
            string[i]= string[i]-32;
        }
        i++;
    }
    puts(string);
}


/* 

 // using strupr() library function:

#include<stdio.h>
#include<string.h>
#define size 100
int main(){
    char string[size];
    gets(string);
    int i=0;
    
    printf("%s\n",strupr(string));
    return 0;
}

*/