#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int i,t;
int check = 0;

bool CheckPrime(int n){
    if(n<2) return false;
    for(i = 2;i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main (int argc, char *argv[])
{
    if(argc != 3){
        printf("please enter 2 number!");
        return 1;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    printf("Prime number in the range from %d to %d: \n",num1,num2);
    while(num1 <= num2){ 
        if(CheckPrime(num1)){
            printf(" %d", num1);
        }
        num1++; 
    }
    return 0;
}