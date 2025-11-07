#include<stdio.h>
#include<string.h>
#include<ctype.h>



int main(){
   int num[]={10,30,2,53,5,43};
   int index =3;

   int *ptr = getptr(num,index);

   printf("%d\n",*ptr);
   printf("%p",(void*)ptr);
}

int getptr(int num[], int index){
    return &num[index];
}
