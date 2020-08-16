#include <stdio.h>
int main(void)
{
  float R,H,Sum;
  printf("Enter R:");
  scanf("%f",& R);
  printf("Enter H:");
  scanf("%f",& H);
  Sum = (2*3.14*R)*H+2*(3.14*R*R);
  printf("sum is :%f",Sum);
  return 0;
}