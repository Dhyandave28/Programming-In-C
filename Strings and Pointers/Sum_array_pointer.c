#include<stdio.h>
#include<string.h>
int main(){

    int a[]={2,5,4};
    int *x;
    x = a;

    int size= sizeof(a)/sizeof(a[0]);

    int b =0;

    for(int i=0;i<size ;i++){
      b += *(x+i);
    }
    printf("%d", b);


}
