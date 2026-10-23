#include <stdio.h>

int main() {
  int k;
  long long tien;
  scanf("%d", &k);
  if (k <= 50){;
    tien = 1LL * k * 1678;
  }            
  else if (k <= 100){
    tien = 50LL * 1678 + 1LL * (k - 50) * 1734;
  }
  else if (k <= 200){
    tien = 50LL * 1876 + 50LL * 1734 + 1LL * (k - 100) * 2014;
  }
  else if (k <= 300){
    tien = 50LL * 1876 + 50LL * 1734 + 50LL * 2014 + 1LL * (k - 200) * 2536;
  }
  else if (k <= 400){
    tien = 50LL * 1876 + 50LL * 1734 + 50LL * 2014 + 50LL * 2536 + (k - 300) * 2834;
  }
  else{
    tien = 50LL * 1876 + 50LL * 1734 + 50LL * 2014 + 50LL * 2536 + 50LL * 2834 + 2927LL * (k - 400);
  }
    printf("%ll", tien);
  return 0;
}