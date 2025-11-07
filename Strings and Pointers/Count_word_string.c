#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
 
   char name;

   printf("Enter the string:");
   scanf("%c",&name);

   if(isdigit(name))
   {
    printf("%c is a digit",name);
   }
   else 
   printf("Is not a digit.");






}