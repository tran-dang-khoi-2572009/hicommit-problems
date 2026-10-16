#include <stdio.h>

int main() {
  int a, b, c, MAX;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  MAX = a;
  if(MAX < b){
    MAX = b;
  }
  if(MAX < c){
    MAX = c;
  }
    printf("%i\n", MAX);
  return 0;
}