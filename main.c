#include <stdio.h>

int main() {
  double d;
  int tien;
  scanf ("%d", &tien);
  if (d <= 1){
    tien = d * 15000
  }
  else if (1 < d <= 5){
    tien = 1 * 15000 + (d - 1) * 13000
  }
  else {
    tien = 1 * 15000 + 4 * 13000 + (d - 5) + 11000
  }
  scanf("%lf", &d);
   
  return 0;
}