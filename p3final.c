#include <stdio.h>
int input()
{
  int n;
  printf("enter the values of n:\n");
  scanf("%d",&n);
  return n;
}
int add (int n)
{
  int i,sum=0;
  for (i=0;i<=n;i++)
    {
      sum=sum+i;
    }
  return sum;
}
void output(int n,int sum)
{
  printf("the sum of first %d numbers is %d",n,sum);
}
int main()
{
  int x,y;
  x=input();
  y=add(x);
  output(x,y);
  return 0;
}