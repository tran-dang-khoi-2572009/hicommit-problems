#include <stdio.h>

int main() {
  int n;
  printf("nhap so nguyen n:");
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("CHAN\n");
  }
  else {
    printf("LE\n");
  }
  return 0;
}