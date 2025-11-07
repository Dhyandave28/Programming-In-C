#include<stdio.h>
#include<string.h>
int main(){

    int a=7;
    int *x;
    x = &a;

    int b=3;
    int *y;
    y=&b;


    *x= *x+*y;
    *y = *x - *y;
    *x = *x - *y;

    printf("%d\n",a);
    printf("%d",b);



    
    


}