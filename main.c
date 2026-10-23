#include <stdio.h>

int main() {
  float dtb;
  scanf("%f", &dtb);
  if (dtb >= 9.00 && dtb <= 10.00){
    printf("A");
  }
  else if(dtb >= 8.00 && dtb <= 8.99){
    printf("B+");
  }
  else if (dtb >= 7.00 && dtb <= 7.99){
    printf("B");
  }
  else if (dtb >= 6.50 && dtb <= 6.99){
    printf("C+");
  }
  else if (dtb >= 5.50 && dtb <= 6.40){
    printf("C");
  }
  else if (dtb >= 5.00 && dtb <= 5.40){
    printf("D+");
  }
  else if (dtb >= 4.00 && dtb <= 4.99){
    printf("D");
  }
  else if (dtb < 4.00){
    printf("F");
  }


  
  return 0;
}