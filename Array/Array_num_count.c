#include<stdio.h>
int main(){
    int n=0;
    int count;

    printf("Enter number of elemtns :");
    scanf("%d",&count);

    int arr[count];

    for(int i=0;i<count;i++){
        printf("Enter element to enter:");
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<count;j++){
        n++;
    }

    printf("The number of elements in array is:%d",n);
}