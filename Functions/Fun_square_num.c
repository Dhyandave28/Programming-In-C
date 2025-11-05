#include<stdio.h>
int printing();

int main(){
    int result = printing();
    printf("%d",result);
}

int printing(){
    int num = 5;

    return num*num;

}