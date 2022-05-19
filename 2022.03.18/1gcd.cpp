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

    int a, b, c;

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = n - i; j >= 1; j--)
        {
            for (int k = n - j; k >= 1; k--)
            {
                if ((( i + j + k) == n) && (k == gcd(i, j)))
                {
                    a = i;
                    b = j;
                    c = k;
                    break;
                }
            }
        }
    }

    cout << a << " " << b << " " << c << endl;
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