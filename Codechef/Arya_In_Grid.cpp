#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T-- > 0)
    {
        long long N,M,X,Y,L;
        long long row,column;
        cin>>N>>M>>X>>Y>>L;
        row=(N-X)/L + (X/L);
        column=(M-Y)/L + (Y/L);

        
        
        cout<<(row*column)+1<<endl;
    }
}
