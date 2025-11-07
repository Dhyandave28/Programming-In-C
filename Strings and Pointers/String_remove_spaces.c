#include<stdio.h>
#include<string.h>
int main(){
    char name[100] ="My name is lucky the racer";
    char hello[100];
    int j=0;

    int length = strlen(name);

    for(int i=0; i< length;i++){
        if(name[i]!= ' '){
           hello[j]=name[i];
           j++;
        }
    }
     hello[j]='\0';

    printf("%s",hello);
}