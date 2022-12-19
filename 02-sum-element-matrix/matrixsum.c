#include <stdio.h>

int sumElementMatrix(int* matrix, int rows, int cols) {
    int sum = 0;

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            sum += *(matrix + i * cols + j);
        }
    }

    return sum;
}

int main(){
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = 2;
    int cols = 3;
    int result = sumElementMatrix(*matrix, rows, cols);
    printf("Sum of all elements in the matrix: %d\n", result);
    return 0;
}