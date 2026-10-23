#include <stdio.h>

int main() {
  float w,h;
  float BMI;
  scanf("%f", &w);
  scanf("%f", &h);
  BMI = w/((h/100)*(h/100));
  if (BMI < 18.500000){
    printf("UNDERWEIGHT");
  }
  else if ( BMI < 24.9999){
    printf("NORMAL");
  }
  else if (BMI < 29.9999 ){
    printf ("OVERWEIGHT");
  }
  else {
    printf ("OBESE");
  }
  return 0;
}