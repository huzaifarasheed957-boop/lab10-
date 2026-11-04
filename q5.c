#include <stdio.h>
#include <string.h>
#define N 5
#define LEN 50
int main(){
    char cities[N][LEN];
    int longest = 0;
    printf("enter %d city names:\n",N);
    for(int i = 0 ; i < N ; i++){
        fgets(cities[i],LEN,stdin);
        cities[i][strcspn(cities[i],"\n")]='\0';
        if (strlen(cities[i])>strlen(cities[longest])){
            longest=i;

        }
    }
    printf("\ncities\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d.%s\n",i+1,cities[i]);

    }
    printf("\nLongest city name:%s (lengest %zu)\n",cities[longest],strlen(cities[longest]));
    
    
    return 0;
}