#include<iostream>
using namespace std;
int main()
{
    int s[8],t[3],a[7];
    s['a','b','a','b','c','d','a'];
    t['a','b','b'];
    a[4,2,3,0,6,5,1];
    int i=0,j=0,k=0;


    while(i<8 && j<3)
    {

        if(s[i]==s[j])
        {
            i++;
            j++;
        }
        else
        i++;

    }   
    if(j==3)
    {
        s[a[k]]=0;  
        k++;
    }
}