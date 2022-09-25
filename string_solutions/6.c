 // C program to convert string to lowercase:

 // without using strlwr() library function:

#include<stdio.h>
#define sizeMax 100
int main(){
    char string[sizeMax];
    gets(string);
    int i=0;
    while(string[i]!='\0'){
        if(string[i]>='A' && string[i]<='Z'){
            string[i]=string[i]+32;
        }
        i++;
    }
    puts(string);
    return 0;
}


/*

// using strlwr() library function:

 #include<stdio.h>
 #include<string.h>
 #define size 100
 int main(){
    char string[size];
    gets(string);
    printf("%s\n",strlwr(string));
    return 0;
 }

*/