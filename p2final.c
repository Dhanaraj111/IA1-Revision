#include <stdio.h>
int input()
{
  int n;
  printf("enter a number:\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  if (a>b && a>c)
  {
    return a;
  }
  if (b>a && b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void main()
{
  int x,y,z,s;
  x=input();
  y=input();
  z=input();
  s= cmp(x,y,z);
  printf("enter the largest number is %d",s);
} 

 