#include<stdio.h>
float input()
{
  float n;
  printf("enter a number:");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float y=1;
 float x=n;
 while(x>y)
   {
     x=x+y/2;
     y=n/x;
  }
return x;
  }
void output(float n,float x)
{
  printf("sqrt of %f is %f\n",n,x);
  
}
int main()
{
  float n,x;
  n=input();
  x=my_sqrt(n);
  output(n,x);
  return 0;
}