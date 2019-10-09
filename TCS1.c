#include<stdio.h>
int main()
{
  int a;
  float area;
  scanf("%d",&a);
  if(a%5==0)
  {
    area = a*a;
    printf("Area of Square : %.2f\n",area);
  }
  else
  {
    area = a*a*3.14;
    printf("Area of Circle : %.2f\n",area);
  }
  return 0;
}

/* Output
10
Area of Square : 100.00
3
Area of Circle : 28.26
*/
