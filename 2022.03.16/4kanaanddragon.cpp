#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, m;

        cin >> x >> n >> m;

        if (x <= (m * 10))
        {
            cout << "YES" << endl;
        }
        else
        {
            // cout << 'a' << " " << x << endl;
            while (x > 0 && n--)
            {
                x = x / 2 + 10;
                // n--;
            }

            while ((x > 0 && m--))
            {
                x = x - 10;
                // m--;
            }

            if (x <= 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}