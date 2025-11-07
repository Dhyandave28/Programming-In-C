#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    
    char s1[22]= "dhyan";

    for(int i=0; s1[i]!='\0';i++){
        s1[i]= toupper(s1[i]);
    }
    printf("%s",s1);
}