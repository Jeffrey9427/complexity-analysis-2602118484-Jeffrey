#include <stdio.h>

int sumN(int N){
    int i = 0; 
    int sum = 0;

    while (i <= N) {     
        sum += i;
        i++;
    }

    return sum;
}

int main(){
    
    int N = 10;
        
    printf("sum for the first N = %d series is %d", N, sumN(N));
}