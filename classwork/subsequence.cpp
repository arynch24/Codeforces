#include<iostream>
using namespace std;
int main()
{
    int s[8],t[3];
    s['a','b','a','c','b','a','d','c'];
    t['a','c','d'];
    int i=0,j=0;
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
    cout<< true;
    else
    cout<< false; 


}