#include <stdio.h>

int main(){
    char ch;
    FILE *fp;
    fp = fopen("out","w");
    fprintf(fp, "melih safa celik");
    fclose(fp);
    fp = fopen("out","r");
    while(!feof(fp)){
        ch = getc(fp);
        printf("\n%c",ch);
    }
}