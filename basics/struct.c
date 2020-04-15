#include <stdio.h>
#include <stdlib.h>
typedef enum {
    man, // 0
    woman  // 1
}sexuality;

typedef enum{
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
}days;

typedef struct{
    int age;
    char * name;
    //enum {man, woman} sexuality;
    sexuality c;
    days holiday; 
}human;

int isRetired(human *person){
    //printf("\n %d %u\n",person->age,person->c);
    //fflush(stdout);
    //perror("gecti");
    if(person -> c == man && person -> age > 55){
        return 1;
    }
    if(person -> c == woman && person -> age>50){
        return 1;
    }
    return 0;
}

int main(){
    human ali;
    ali.age = 30;
    ali.c = man;
    ali.holiday = wednesday;
    printf("Age of Ali: %d\n",ali.age);
    printf("Sexuality of Ali: %u\n",ali.c);
    printf("Holiday of Ali: %u\n",ali.holiday);

    human *veli;
    veli = (human*) malloc(sizeof(human));
    veli -> c = man;
    veli -> age = 70;
    printf("Age of Veli: %d\n",veli->age);
    printf("Is Ali retired? %d\n",isRetired(&ali));
    printf("Is Veli retired? %d\n",isRetired(veli));
}