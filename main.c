#include <stdio.h>
int mystery (int i) {
    int m = 1;
    while (i >= 0) {
      m = m * i;
      i = i - 1;
    }
    return m;
}

int main(void) {
  int i = 8;
  int m = mystery(i);
  printf("m = %d, i = %d\n", m, i);
  return 0;
}