#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void solve()
{
    int n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    int ma = (n + a - 1) / a;
    int mb = (n + b - 1) / b;
    int ans = INT_MAX;

    if (mb > ma)
    {
        for (int i = 0; i <= ma; i++)
        {
            if (n - a * i < 0)
                continue;
            if ((n - a * i) % b == 0)
            {
                ans = min(ans, i * p + q * (n - i * a) / b);
            }
        }
    }
    else
    {
        for (int i = 0; i <= mb; i++)
        {
            if (n - b * i < 0)
                continue;
            if ((n - b * i) % a == 0)
            {
                ans = min(ans, i * q + p * (n - i * b) / a);
            }
        }
    }

    if (ans == INT_MAX)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << ans << "\n";
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}