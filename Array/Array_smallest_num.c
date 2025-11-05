#include<stdio.h>
int main(){
    int count;

    printf("Enter number of elemtns :");
    scanf("%d",&count);

    int arr[count];

    for(int i=0;i<count;i++){
        printf("Enter element to enter:");
        scanf("%d",&arr[i]);
    }

    int temp;
    int small=arr[0];

    for(int j=0;j<count;j++){
       if(arr[j]<small){
        small = arr[j];
       }
       }

       printf("The smallest number is :%d",small);
    }

   