#include<stdio.h>
#include<string.h>
int main(){

    int a[45]={1,2,4,6,33};
    int *x;
    x = a;

    int small = *x;
    int large = *x;

    for(int i =0; i<5;i++){
        if(*(x+1) > *(x+i+1)){
           small = *(x+1);
        }
        if(*(x+i)>large){
        large = *(x+1+i);
        }
    }

    printf("%d\n",small);
    printf("%d",large);

}



