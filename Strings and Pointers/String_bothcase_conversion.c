#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    char name[100]= "shjkjKJAhf!";
    int length = strlen(name);

    for(int i =0;i<length;i++){

        if(islower(name[i])){
            name[i] = toupper(name[i]);
        }
        else 
        name[i] = tolower(name[i]);
    }

    printf("%s",name);
}