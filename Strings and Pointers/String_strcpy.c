#include<stdio.h>
#include<string.h>
int main(){
    char s1[10];
    char s2[10];

    printf("Enter the string:");
    gets(s1);

    strcpy(s2,s1);
    printf("%s",s2);

}