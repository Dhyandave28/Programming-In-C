#include<stdio.h>
#include<string.h>
int main(){
    char name[100] ="I love programming";
    char word[50][50];
    int i=0,j=0,k=0;

    while (name[i]!='\0')
    {
        if(name[i]==' '){
        word[k][j]='\0';
        k++;
        j=0;
    }
    else{
        word[k][j] = name[i];
        j++;
    }
    i++;
}
word[k][j]='\0';

int total = k+1;
printf("Output:");

for(int x = total-1; x>=0;x--){
    printf("%s",word[x]);
    if(x>0)printf(" ");
}
}