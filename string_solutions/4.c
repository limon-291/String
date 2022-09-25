// Compare two string :

// Without using strcmp() library function: 

#include<stdio.h>
#define size 100
int compare(char string1[], char string2[]);
int main(){
    char string1[size];
    char string2[size];
    gets(string1);
    gets(string2);
    int result;
    result=compare(string1,string2);
    if(result==0){
        printf("\nBoth string are equal");
    }
    else if(result>0){
        printf("\nString1 is greater than string2");
    }
    else printf("\nString1 is less than String2");


    return 0;

}
int compare(char string1[], char string2[]){
    int i=0;
    while(string1[i]==string2[i]){
        if(string1[i]=='\0' && string2[i]=='\0'){
            break;
        }
        i++;
    }
    return string1[i]-string2[i];

}

/* 

 // Using strcmp() library function: 

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define sizeMax 100
int main(){
    char str1[sizeMax];
    gets(str1);
    char str2[sizeMax];
    gets(str2);

    int result;
    result=strcmp(str1,str2);

    if(result==0){
        printf("\nBoth string are equal");
    }
    else if(result>0){
        printf("\nString1 is greater than string2");
    }
    else printf("\nString1 is less than String2");


    return 0;
}

*/