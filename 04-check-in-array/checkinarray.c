// write a c code to return 1 if an integer k is in both arrays that are different

#include <stdio.h>

int checkarray(int *a, int *b, int m, int n, int k) {
    int result1;
    int result2;
  
    for (int i = 0; i < m; i++) {
        if (a[i] == k) {
            result1 = 1;
        }
    }
    for (int j = 0; j < n; j++) {
        if (b[j] == k) {
            result2 = 1;
        }
    }
    
    return result1 & result2;
}


int main() {
  int a[3] = {1, 2, 3};
  int b[4] = {2, 3, 4, 5};
  int m = 3;
  int n = 4;
  int k = 4;
  checkarray(a, b, m, n, k);
  return 0;
}