#include <stdio.h>

int main() {
  int khoangcach, giatridonhang;
  int phigiaohang;

  scanf("%d %d", &khoangcach, &giatridonhang);
  if (khoangcach <= 0 || giatridonhang < 0){
    printf("INVALID");
  }
  else if (giatridonhang >= 500000 && khoangcach <= 15){
    phigiaohang = 0;
    printf ("%d", phigiaohang);
  }
  else if (khoangcach <= 5){
    phigiaohang = 15000;
    printf("%d", phigiaohang);
  }
  else if (khoangcach <= 15){
    phigiaohang = 25000;
    printf("%d", phigiaohang);
  }
  else {
    phigiaohang = 40000;
    printf("%d", phigiaohang);
  }
 
  return 0;
}