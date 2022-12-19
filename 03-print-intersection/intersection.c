#include <stdio.h>

void print_intersection(int *a, int *b, int m, int n) {
  printf("Intersection: ");
  
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i] == b[j]) {
        printf("%d ", a[i]);
      }
    }
  }
  printf("\n");
}

int main() {
  int a[3] = {1, 2, 3};
  int b[4] = {2, 3, 4, 5};
  int m = 3;
  int n = 4;
  print_intersection(a, b, m, n);
  return 0;
}