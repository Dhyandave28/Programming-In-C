#include<stdio.h>
int printing();

int main(){
    int result = printing();
    printf("%d",result);
}

int printing(){
    int n1 =4;
    int n2=9;
    
    if(n1>n2)
     return n1;
    else 
     return n2;

}