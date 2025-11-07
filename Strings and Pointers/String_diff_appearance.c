#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    char name[200]= "mango vanilla shake";
    int a=0;
    int b=0;
    int c=0;
    int d=0;

    for(int i=0; name[i]!=0 ; i++){


        if(isalpha(name[i])){
            a++;
        }
        else if(isdigit(name[i])){
            b++;
        }
        else if(name[i] == ' '){
            c++;
        }
        else{
            d++;
        }
    }

    printf(" char %d",a);
    printf("\n digit %d",b);
    printf("\nspace %d",c);
    printf("\nspecial char %d",d);

   
}