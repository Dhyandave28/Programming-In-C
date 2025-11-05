#include<stdio.h>
void printing(float x);

int main(){
    float x;
    printf("Enter the radius of the circle:");
    scanf("%f",&x);
    printing(x);
}

void printing(float x){

    float area = 3.14*x*x;
    printf("Area is: %f",area);

}
