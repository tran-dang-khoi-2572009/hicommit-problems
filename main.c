#include <stdio.h>

int main(){
  int y , m, d;
  int check = 0;
  scanf("%d%d%d",&d,&m,&y);

  if (y <= 0)
  {
    printf("INVALID");
    return 0;
  }

  if ((d <= 31 && d >= 1) && (m == 1 || m == 3 || m == 5 || m == 7 ||m == 8 || m == 10 || m == 12))
  {
      printf("VALID");
  }
  else if ((d <= 30 && d >= 1) && (m == 4 || m == 6 || m == 11 || m == 9)){
    printf("VALID");
  }
  
  else if (((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) && ((d <=  29 && d >= 1) && (m == 2)))
  {
    printf("VALID");
    check = 1;
  }
  else if (((check == 0) && (d <= 28 && d >= 1)) &&  (m == 2))
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }

  return 0;
}