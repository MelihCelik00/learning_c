#include <stdio.h>

int factorial(int x){
  if(x==0){
    return 1;
  }
  return x*factorial(x-1);
}

int fibonacci(int n){
    if(n==1 || n==0){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-1);
}

int main(){
  int x, y;
  printf("Enter a integer number: ");
  scanf("%d",&y);
  
  printf("\nWhich operation you wanna do?\n1)Factorial Calculation\n2)Fibonacci Calculation\nEnter only 1 or 2\n");
  scanf("%d",&x);
  if(x == 1){ // Factorial
    printf("Factorial of %d is %d\n",y,factorial(y));
  }
  else if(x == 2){
    printf("Fibonacci value of %d is %d\n",y, fibonacci(y));      
  }
  
}

