#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char name[200]= "mango muscle maker";
    char name2[200];
    char rep = 'm';
    char word = 'z';

    int length = strlen(name);

    for (int i = 0; i < length; i++)    
    {
        if(name[i]== 'm'){
                     
            name[i]=word;
        }
    

    }
    printf("%s",name);
    
}