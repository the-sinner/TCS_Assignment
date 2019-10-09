#include<stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  int b;
  b= a;
  if((b>=48)&&(b<=57))
  printf("digit\n");
  else if((b>=97)&&(b<=122))
  printf("Alphabet small case\n");
  else if((b>=65)&&(b<=90))
  printf("Alphabet capital case\n");
  else
  printf("Special character\n");
  return 0;
  /*Output
  Shalabhs-MacBook-Air:AlgoDS shalabh$ ./a.out
  9
  digit
  Shalabhs-MacBook-Air:AlgoDS shalabh$ ./a.out
  x
  Alphabet small case
  Shalabhs-MacBook-Air:AlgoDS shalabh$ ./a.out
  R
  Alphabet capital case
  Shalabhs-MacBook-Air:AlgoDS shalabh$ ./a.out
  #
  Special character
  */
}
