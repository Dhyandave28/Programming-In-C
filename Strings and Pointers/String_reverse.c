#include<stdio.h>
#include<string.h>
int main(){

    char name[22];
    int length;

    printf("Enter the string:");
    gets(name);

    length = strlen(name);

     for(int i=length-1; i>=0; i--){
        printf("%c",name[i]);
     }
     printf("\n");
}