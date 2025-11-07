#include<stdio.h>
#include<string.h>

int ae( int *conso, int *vowel, char name[]){


    for(int i=0; name[i]!='\0';i++){
        if(name[i] == 'a' ||name[i] == 'e' ||name[i] == 'i' ||name[i] == 'o' ||name[i] == 'u'){
            (*vowel)++;
        }
        else{
            (*conso)++;
        }
    }
    return vowel,conso;

}

int main(){

    char name [25]="Hellow world";
    int vowel =0;
    int conso =0;
    
    ae(&conso, &vowel,  name);

    printf("The no. of consonants are :%d",vowel);
    printf("\nThe no. of voewls are :%d",conso);
}