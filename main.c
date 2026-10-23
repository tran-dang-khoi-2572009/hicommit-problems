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
  else if ( 18.500000 <= BMI && BMI < 25.00 %f ){
    printf("NORMAL");
  }
  else if (25.00 <= BMI && BMI < 30.00 %f ){
    printf ("OVERWEIGHT");
  }
  else if (BMI >= 30.00){
    printf ("OBESE");
  }
  return 0;
}