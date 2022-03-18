#include <stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size of array:\n");
  scanf("%d",&n);
  return n;
  }
void input_array(int n,int a[n])
{
  int i;
  printf("enter the elements of the array:\n");
  for (i=0;i<n;i++)
    {
      printf("enter the values of array:\n");
      scanf("%d",a[i]);
    }
    
}
int sum_n_arrays(int n,int a[n])
{
  int i,sum=o;
  for (i=0;i<n;i++)
    {
      sum+=a[i];
    }
  return sum;
}
 void output(int n, int a[n],int sum)
{
  int i;
  printf("the sum of the array elements is:\n");
  for (i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(i==(n-1))
    {
      printf("%d is",a[i]);
    }
  }
  printf("%d",sum);
}

  int main()
  {
    int n,sum;
    n=input_array_size();
    int a[100];
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
  }