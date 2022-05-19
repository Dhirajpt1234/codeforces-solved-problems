#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long i, j, k, l, m, n, x, t;
    cin >> t;
    string s;
    while (t > 0)
    {
        t = t - 1;
        cin >> n >> k >> s;
        for (i = 0; i < k; i++)
        {
            if (s[i] != s[n - i - 1])
                break;
        }
        
        if (i == k && n > 2 * k)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}