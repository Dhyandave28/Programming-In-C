#include<stdio.h>
#include<string.h>
int main(){

    int num = 42;
    int *ptr = &num;
    int **dptr = &ptr;

    printf("%d", **dptr);
    
}