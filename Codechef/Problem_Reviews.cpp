#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T-->0)
    {
        int N;
        cin>>N;
        int S[N];
        int flag=0;
        
        for (int i=0;i<N;i++)
        {
            cin>>S[i];
            if(S[i]<=4)
            flag=1;
        }
        
        if (flag==1)
        cout<<"NO"<<endl;
        else if(flag==0)
        cout<<"YES"<<endl;
    }


}