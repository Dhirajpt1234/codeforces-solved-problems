#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
vector<bool> isprime(N, true);

int main()
{
    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i])
        {
            for (int j = 2 * i; j < N; j += i)
                isprime[j] = false;
        }
    }

    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a + 1; i < b; i++)
    {
        if (isprime[i])
        {
            ans++;
            cout << i << ' ';
        }
    }

    cout << ans;

    return 0;
}