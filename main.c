#include <stdio.h>

int main() {
  float dtb;
  scanf("%1f", &dtb);
  if (dtb >= 9.00 && dtb <= 10.00){
    printf("A");
  }
  else if(dtb >= 8.00 && dtb <= 8.99){
    printf("B+");
  }
  else if (dtb >= 7.00 && dtb <= 7.99){
    printf("B");
  }
  else if (dtb >= 6.5 && dtb <= 6.99){
    printf("C+");
  }
  else if (dtb >= 5.5 && dtb <= 6.4){
    printf("C");
  }
  else if (dtb >= 5.00 && dtb <= 5.4){
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