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

    for(int j=0;j<count;j++){
       for(int z=j+1;z<count;z++){
        if(arr[j]>arr[z]){
        temp = arr[z];
        arr[z] = arr[j];
        arr[j]= temp;
       }
       }
    }

   for(int k=0;k<count;k++){
    printf("%d", arr[k]);
   }
}