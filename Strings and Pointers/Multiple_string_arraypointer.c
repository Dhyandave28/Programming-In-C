#include<stdio.h>
#include<string.h>
int main (){
    char *name[]={"dhyan","aryan","kavya","ravi"};

    int count = sizeof(name)/sizeof(name[0]);
    
    printf("List of names:");

    for(int i =0; i<count;i++){
        printf("%s\n",name[i]);
    }

}