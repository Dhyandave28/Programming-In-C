#include<stdio.h>
#include<string.h>
int main(){

    int a=45;
    int *ptr;
    ptr = &a;

    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%lu", (long)ptr);


}