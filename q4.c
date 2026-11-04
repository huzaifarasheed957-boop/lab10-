#include <stdio.h>
#include <string.h>
int main(){
    char sentence[200];

    printf("enter a sentence:");
    fgets(sentence,sizeof(sentence),stdin);
    sentence[strcspn(sentence,"\n")]='\0';

    char*p=strchr(sentence,'a');
    if(p != NULL)
        printf("first 'a' found at index %ld\n",(long)(p-sentence));
    else{
        printf("letter 'a' not found\n");

    }
    if (strstr(sentence,"good")!=NULL){
        printf("word 'good' found.\n");

    }else{
        printf("word 'good' not found.\n");

    }
    return 0;
}