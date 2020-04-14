#include <stdio.h>

int main(){
    printf("Hello world!\n");

    int a = 10;
    int b = 3, c= 4;
    int x;
    printf("a: %d b: %d c: %d\n",a,b,c);

    printf("Please enter a number:");
    scanf("%d",&x);
    printf("Entered number is %d\n",x);

    float pi = 3.14;
    printf("You entered PI as: %3.4f\n",pi); // Left side of dot states that how many characters will be written left side of dot on the console. Right side of dot states the same thing but right side version.
    

    return 0;
}