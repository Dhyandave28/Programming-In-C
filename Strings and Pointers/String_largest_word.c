#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    char name[200]= "mango vanilla shake";
    char name2[200];
    char large[200];
    int maxlen=0;
    int a=0;
    int i=0;

    while(1){

        if(name[i]== ' ' || name[i]== '\0'){
        //if 1st word of string terminated stored in string 2
            name2[a]= '\0';
    
        if(a>maxlen){
            maxlen =a;
            strcpy(large,name2);
        }
        a= 0;
    }
    
    //ending loop or giving it to string 2
        if(name[i] =='\0'){
            break;
        }
       else{
            name2[a]= name[i];
            a++;
        }
        i++;
    }

    printf("Input : %s\n",name);
    printf("Laregst word :%s",large);
}


