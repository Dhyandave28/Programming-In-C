#include<stdio.h>
int main(){
    int rows = 5;
    for(int i=0;i<=rows;i++){
        int spaces = rows-i-1;
        int stars = 2*i+1;

        for(int s=0; s<spaces;s++){
            printf(" ");
        }
        for(int j=0;j<stars ;j++)
           printf("*");
        
      
        printf("\n");
    }
}