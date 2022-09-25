// C program to toggle case of each character in a string:

#include<stdio.h>
#define sizeMax 100
int main(){
    char str[sizeMax];
    gets(str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        
        i++;
    }

    puts(str);
    return 0;
}
