#include <stdio.h>

int main(){
    int currentYear,yourBirthYear;
    printf("\nCurrent Year? Enter here: ");
    scanf("%d",&currentYear);

    printf("\nEnter your birth year: ");
    scanf("%d",&yourBirthYear);

    printf("\nYour age is: %d\n",currentYear-yourBirthYear);

}