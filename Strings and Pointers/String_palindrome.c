#include<stdio.h>
#include<string.h>
int main(){

    char name[45];
    printf("Enter the string:");
    gets(name);

    int length = strlen(name);

    char pali[45];

    for(int i=0; i<length ;i++ ){

        pali[i]= name[length-1-i];
    }
    pali[length] = '\0';

    printf("%s\n", pali);

    if(pali == name){
        printf("It is palindrome.");
    }
    else{
        printf("Not a plaindrome");
    }
}