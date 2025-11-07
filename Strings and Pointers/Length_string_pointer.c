#include<stdio.h>
#include<string.h>
int main(){

    char name[20]="hello";

    char *ptr;
    ptr = name;

    int length =0;

    while (*ptr != '\0')
    {
        ptr++;
        length++;
    }
    
    printf("%d",length);
}
