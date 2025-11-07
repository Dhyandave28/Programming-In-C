#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    char name[200]= "mango vanilla shake";
    char find[23]="mango";
    char word[50];
    int found =0;
    int j=0;
    int count =0;

    for (int i = 0; name[i]!= '\0'; i++) {

        if (name[i] == ' ') {
            word[j] = '\0';   // terminate current word
            
            if (strcmp(word, find) == 0) {
                count++;
            }
            j = 0;  // reset for next word
        } 

        else {
            word[j] = name[i];
            j++;
        }
    }

    // check the last word (since it may not end with a space)
    word[j] = '\0';
    if (strcmp(word, find) == 0) {
        count++;
    }

    printf("Input string: %s\n", name);
    printf("Word to find: %s\n", find);
    printf("Occurrences: %d\n", count);
}

