#include <stdio.h>

int main(){
    for(int i=3;i<=50;i++){
        if(i%2==0 && i%3==0){
            printf("%d\n",i);
        }
    }
    float x = 10.0;
    while (x<11)
    {
        x = x +0.01;
        printf("%3.4f\n",x);
    }
    for(int n = 10; n>=0;n--){
        printf(" ");
        for(int k =0;k<10-n;k++ ){
            if(k==7){
                break;
            }
            
            printf("*");
            
        }
        printf("\n");
    }
}