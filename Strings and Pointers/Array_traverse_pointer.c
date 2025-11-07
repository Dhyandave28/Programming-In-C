#include<stdio.h>
#include<string.h>
int main(){

    int a[]={34,3,64};
    int *ptr=a;

    for(int i=0; i<3;i++){
        printf("%d\n", *ptr);
        ptr++;

    }
    


}