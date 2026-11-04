#include <stdio.h>
#include <string.h>

int main(){
    char first[50],last[50],full[101]="";

    printf("enter first name:");
    fgets(first, sizeof(first),stdin);
    first[strcspn(first,"\n")]='\0';

    strcpy(full,first);
    strcat(full,"");
    strcat(full,last);

    printf("full name:%s\n",full);
    
    return 0;
}