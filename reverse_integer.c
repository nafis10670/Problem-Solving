#include<stdio.h>

int main(){
    int given = 1234, result = 0;

    for(int i=0;i<4;i++){
        result = (result * 10) + (given % 10);
        given /= 10;
        //printf("%d", result);
    }

    printf("Result: %d", result);
}
