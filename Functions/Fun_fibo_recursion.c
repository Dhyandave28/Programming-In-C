#include<stdio.h>
int printing(int x);

int main(){
    int x;

    printf("Enter the no. of terms to find fibonacci for :");
    scanf("%d",&x);

    if(x==1 || x==0){
        printf("Enter number other than 1 and 0.");
    }

    for(int i=0;i<x;i++){
        printf("%d\n",printing(i));
    }

}

int printing(int x){
    if(x==0)
     return 0;
    
     else if (x==1)
      return 1;
    else
     return  printing(x-1)+printing(x-2);
   

}

