#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int a, b, c;
    for (a = 2; b = n - 3; (__gcd(a, b) != 1))
    {
        a++;
        b--;
    }
    cout << a << " " << b << " " << 1 << endl;
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