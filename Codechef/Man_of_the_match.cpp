#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int S[22];
        int max = 0, max_index;
        int A[22], B[22];
        for (int i = 0; i < 22; i++)
        {
            cin >> A[i] >> B[i];
            S[i] = A[i] * 1 + B[i] * 20;
            if (S[i] > max)
            {
                max = S[i];
                max_index = i+1;
            }
        }
        cout << max_index<<endl;
    }
}