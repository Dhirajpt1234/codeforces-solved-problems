#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(b - a, a);
}

void solve()
{

    int n;
    cin >> n;

    for (int i = n - 2; i > 0; i--)
    {
        if ((i + n - i - 1 + 1) == n && (gcd(i, n - i - 1) == 1))
        {
            cout << i << " " << n - i - 1 << " " << 1 << endl;
            break;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}