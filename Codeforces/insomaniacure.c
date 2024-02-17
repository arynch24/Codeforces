#include<stdio.h>
int main()
{
    int k,l,m,n,d;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int z=d+1;
    int count=0;
    while(z-->1)
    {
        if(z%k==0||z%l==0||z%m==0||z%n==0)
        count++;
    }
    printf("%d",count);
}