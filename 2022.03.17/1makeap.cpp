#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a - b) % c == 0 || c % (a - b) == 0 || (a - c )% b == 0 || b % (a - c) == 0 || (b - c )% a == 0 || a % (b - c) == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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