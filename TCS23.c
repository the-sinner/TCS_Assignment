#include<stdio.h>
int main()
{
  int h1,h2,m1,m2,s1,s2,rem=0;
  scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
  s1 = s1+s2;
  if(s1>59)
  {
    s1=s1%60;
    rem=1;
  }
  m1=m1+m2+rem;
  rem=0;
  if(m1>59)
  {
    m1=m1%60;
    rem=1;
  }
  h1=h1+h2+rem;
  printf("Hr Min Sec\n%d   %d   %d\n",h1,m1,s1);
  return 0;

  /*Output
  11 59 59
  3 2 5
  Hr Min Sec
  15   2   4
  */
}
