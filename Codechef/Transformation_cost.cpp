#include <bits/stdc++.h>

using namespace std;

bool check(int n)
{
    int bin, arr[8], i = 0, flag = 0;
    while (n != 0)
    {
        bin = n % 2;
        n /= 2;
        arr[i] = bin;
        i += 1;
    }
    for (int j = 0; j <= 5; j++)
    {
        if (arr[j] == 1 && arr[j + 1] == 0 && arr[j + 2] == 1)
        {
            flag = 1;
        }
    }
    if (flag = 1)
        return 1;
    else
        return 0;
}

int main() {
    // your code goes here
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int ans;
        int N, i = 0;
        cin >> N;

        if (check(N) == false)
            cout << 0;

        else
        {
            while (check(N) == true)
            {
                ans = pow(2, i);
                N += ans;
                i += 1;
            }
            cout << ans;
        }

    }
}