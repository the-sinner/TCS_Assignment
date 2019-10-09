#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int x,sum=0;
  while(a)
  {
    x = a%10;
    sum+=x;
    a/=10;
  }
  printf("Sum of digits: %d\n",sum);
  return 0;

  /*Output
  125
  Sum of digits: 8
  */
}
