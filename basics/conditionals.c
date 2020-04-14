#include <stdio.h>

int main(){
    int a,b;
    printf("Welcome to the Conditionals Part my mannnn!\n\nEnter random two integer numbers and find out which one is bigger.\nEnter here:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is bigger than, %d\n",a,b);
    }else if(a<b){
        printf("%d is bigger than %d\n",b,a);
    }else{
        printf("Numbers are equal!\n");
    }
}