#include<stdio.h>
#include<string.h>
int main(){

    char name[20]="hello world";
    char *x = name;

    char name2[20];
    char *y = name2;

    while (*x != '\0')
    {
        *y= *x;
        x++;
        y++;
    }
    *y = '\0';

    printf("%s\n",name2);

}
