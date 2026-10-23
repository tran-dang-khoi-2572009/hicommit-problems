#include <stdio.h>

int main() {
  float dtb;
  scanf("%d", &dtb);
  if (dtb >= 9.00 && dtb <= 10.00){
    printf("A");
  }
  else if(dtb >= 8.00 && dtb <= 8.99){
    printf("B+");
  }
  else if (dtb >= 7.00 && dtb <= 7.99){
    printf("B");
  }
  else if (dtb >= 6.5 && dtb <= 6.9){
    printf("C+");
  }
  else if (dtb >= 5.5 && dtb <= 6.4){
    printf("C");
  }
  else if (dtb >= 5.0 && dtb <= 5.4){
    printf("D+");
  }
  else if (dtb >= 4.0 && dtb <= 4.9){
    printf("D");
  }
  else if (dtb < 4.0){
    printf("F");
  }


  
  return 0;
}