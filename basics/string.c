#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[20];
    char *surname;
    surname = (char *) malloc(sizeof(char)*20);
    scanf("%s",name);
    scanf("%s",surname);
    printf("Nice to meet you %s %s\n",name,surname);
    printf("Third characters: %c %c\n",name[3],surname[3]);


}