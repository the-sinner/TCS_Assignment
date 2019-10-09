#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  int sum=0,sign=1,c=1;
  while(c<=a)
  {
     sum+=(c*c*sign);
     c++;
     sign*=-1;
  }
  printf("Sum : %d\n",sum);
  return 0;
}
/*Output
3
Sum : 6
*/
