#include <stdio.h>

int main(){
    int arr[20];
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2;i<20;i++){
        arr[i]= arr[i-1]+arr[i-2];
    }

    return 0;
}