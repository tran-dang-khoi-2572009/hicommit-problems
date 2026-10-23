#include <stdio.h>

int main() {
  int k;
  long long tien;
  scanf("%d", &k);
 if (k <= 50) {
        tien = 1LL * k * 1678;
    } else if (k <= 100) {
        tien = 83900LL + 1LL * (k - 50) * 1734;
    } else if (k <= 200) {
        tien = 170600LL + 1LL * (k - 100) * 2014;
    } else if (k <= 300) {
        tien = 372000LL + 1LL * (k - 200) * 2536;
    } else if (k <= 400) {
        tien = 625600LL + 1LL * (k - 300) * 2834;
    } else {
        tien = 909000LL + 2927LL * (k - 400);
    }
    printf("%d", tien);
  return 0;
}