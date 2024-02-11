#include <stdio.h>
int isprime(int p)
{
    for (int i = 2; i * i <=p; i++) 
    {
        if (p % i == 0) 
        return 0;
    }
    return 1;
}
int main()
{
  int n;
  scanf("%d",&n);
  int count=0,count2=0;
  for (int i=1;i<=n;i++)
  {
      for (int j=2;j<=n;j++)
      {
          if(isprime(j)==1 && i%j==0&&i>j)
          {
              count++;
          }
      }
      if(count==2)
      {
          count2++;
      }
      count=0;
  }
  printf("%d",count2);
}