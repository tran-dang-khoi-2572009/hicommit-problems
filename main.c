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
  else if (( 18.500000 <= BMI) && ( BMI < 24.9999)){
    printf("NORMAL");
  }
  else if ((25.00 <= BMI) && (BMI < 29.9999 )){
    printf ("OVERWEIGHT");
  }
  else if (BMI >= 30.00){
    printf ("OBESE");
  }
  return 0;
}