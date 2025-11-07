#include<stdio.h>
#include<string.h>
int main(){

    int x=12;
    int *ptr = &x;

    int y = 34;
    int *ptr2 = &y;

    int z = *ptr2+*ptr;
    int *ptr3 = z;

 


    printf("%d",ptr3);


    
}