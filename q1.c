#include <stdio.h>
#include <string.h>

int main(){
    char name[100],copy[100];
    
    printf("enter the name:");
    fgets(name, sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    printf("lenght =%zu\n",strlen(name));

    strcpy(copy,name);
    printf("copy:%s\n",copy);

    printf("sizeof (name)= %zu,strlen(name)=%zu\n",sizeof(name),strlen(name));
    
    return 0;
}