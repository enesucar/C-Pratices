#include <stdio.h>

int main() {
  //int matrix [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  //printf("%d\n", matrix[0][1]);

  int matrix [3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }


  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
