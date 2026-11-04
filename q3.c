#include <stdio.h>
#include <string.h>
int main(){
    char correct[]="lab10pass";
    char input[100];

    printf("enter the password:");
    fgets(input,sizeof(input),stdin);
    input[strcspn(input,"\n")]='\0';

    if(strcmp(input,correct)==0){
        printf("acess granted\n");

    }else{
        printf("acess denied\n");

    }

    if(strncmp(input,correct,3)==0){
        printf("first 3 character matched.\n");

    }else{
        printf("first 3 character do not matched.\n");

    }
    return 0;
}