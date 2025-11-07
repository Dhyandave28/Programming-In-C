#include<stdio.h>
#include<string.h>
int main(){

    char name[20]="hello";
    char *x = name;

    char name2[20] ="world";
    char *y = name2;

    while(*x !='\0')
    {
        x++;
    }
    while (*y !='\0')
    {
        *x = *y;
        x++;
        y++;
    }
    *x = '\0';
    printf("%s" ,name);
}
