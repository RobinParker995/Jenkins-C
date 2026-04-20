#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* name = malloc(30);

    strcpy(name, "Robin Parker");

    printf("I am %s \n", name);

    printf("This is Jenkins Templete for the agent \n");

    free(name);

    return 0;
}