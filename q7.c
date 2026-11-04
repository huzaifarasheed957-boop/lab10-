#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    FILE*fp=fopen("students.txt","w");
    if(fp==NULL){
        printf("error:could not open file for writing.\n");
        return 1;
    } 
    
    printf("enter three students names:\n");
    for (int i = 0; i < 3; i++)
    {
        fgets(name,sizeof(name),stdin);
        name[strcspn(name,"\n")]='\0';
        fprintf(fp,"%s\n",name);

    }
    fclose(fp);

    fp=fopen("students.txt","r");
    if(fp==NULL){
       printf("Error: could not open file for reading.\n");
        return 1;
    }
    printf("names read from students.txt:\n");
    int count=0;
     while (fgets(name, sizeof(name), fp) != NULL) {
        name[strcspn(name, "\n")] = '\0';
        count++;
        printf("%d. %s\n", count, name);
    }
    fclose(fp);
 
    printf("Total students in file: %d\n", count);
    return 0;
}