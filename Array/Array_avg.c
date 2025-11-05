#include<stdio.h>
int main(){
  
    int arr[40];
    int count;
    int sum=0;
 
    printf("Enter the no. of elements you want:");
    scanf("%d",&count);

    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<count;j++){
       sum = sum+arr[j];
    }
    int avg = sum/count;

    printf("The avg is :%d",avg);

}