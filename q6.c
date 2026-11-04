#include <stdio.h>
#include <string.h>
#define N 5
#define LEN 50
int main(){
    char name[N][LEN], temp[LEN];

    printf("enter %d student name:\n",N);
    for (int i = 0; i < N; i++)
    {
        scanf("%49s",name[i]);

    }
    
    for (int i = 0; i < N-1; i++)
    {
        for (int j = 0; j < N-1-i; j++)
        {
            if(strcmp(name[j],name[j+1])>0){
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
        
    }
    
    printf("sorted list\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d.%s\n",i+1,name[i]);
    }
    
    return 0;
}