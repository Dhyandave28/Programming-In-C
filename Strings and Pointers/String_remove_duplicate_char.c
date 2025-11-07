#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    char name[100]= "Helllo";
    char yeat[100];

    int k=0;

    int length = strlen(name);

    for(int i=0; i<length; i++){

          int found =0;
          //duplicate character
        for(int j=0;j<i;j++){
            if(name[i] == name[j]){
                found =1;
                break;
            }
        }

        if(!found){
            yeat[k] = name[i];
            k++;
        }
    }

     yeat[k] = '\0';
     printf("Original: %s\n",name);
     printf("Without duplicate: %s",yeat);
}