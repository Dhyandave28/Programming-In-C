#include<stdio.h>
int printing(int a,int b);

int main(){
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printing(a,b);
}

int printing(a,b){
    int sum = a+b;
    printf("%d",sum);

}