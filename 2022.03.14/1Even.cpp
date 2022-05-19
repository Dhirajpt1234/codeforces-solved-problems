#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int main()
{
    ull n, k, ans = 0;
    cin >> n >> k;

    if (k <= (n / 2) && (n % 2 == 0))
    {
        ans = 1 + (k - 1) * 2;
        // cout << "a" << endl;
    }

    else if (k <= ((n + 1) / 2) && (n % 2 != 0))
    {
        n = n + 1;
        ans = 1 + (k - 1) * 2;
        // cout << "b" << endl;
    }
    else if (n % 2 == 0)
    {
        k = k - (n / 2);
        ans = 2 + (k - 1) * 2;
        // cout << "c" << endl;
    }
    else
    {
        k = k - ((n + 1) / 2);
        ans = 2 + (k - 1) * 2;
        // cout << "d" << endl;
    }

    cout << ans << endl;

    return 0;
}