#include<stdio.h>
#include<string.h>
int main(){

    char name[22];
    char search;
    int num=0;

    printf("Enter the string:");
    gets(name);

     int length = strlen(name);

    printf("\nEnter the character to be searched:");
    scanf("%c",&search);

    for(int i=0; i<length ;i++){

        if(search == name[i]){
            num++;
        }
    }
     printf("%d",num);
}