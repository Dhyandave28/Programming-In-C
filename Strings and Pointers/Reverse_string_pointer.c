#include<stdio.h>
#include<string.h>
int main(){

    char name[20]="hello";
    char *x = name;
    int length = strlen(name);

    char name2[20];
    char *y = name2;

        for(int i=length-1; i>=0; i--){
        *y = *(x+i);
        y++;
     }
     *y = '\0';
     printf("%s",name2);
}

