#include<stdio.h>
float printing(float x);

int main(){
    float x;
    printf("Enter the number to find factorial of:");
    scanf("%f",&x);

    if(x==1 || x==0){
        printf("Enter number other than 1 and 0.");
    }

    float result = printing(x);
    printf("%f",result);

}

float printing(float x){
    
    return x * (x-1);
   

}
