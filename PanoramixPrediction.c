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
    int a,b;
    scanf("%d %d", &a,&b);
    int x=isprime(a);
    int y=isprime(b);
    int flag=0;
    
    if (x==1&&y==1)
    {
        for (int i=a+1;i<=b;i++)
        {
            if (isprime(i)==1&&i<b)
            flag=1;
        }
    }
    if (flag==1||x==0||y==0)
        printf("NO");
    else
        printf("YES");
    
}