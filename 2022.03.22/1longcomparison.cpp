#include <bits/stdc++.h>
using namespace std;
#define ll long int

void solve()
{
    ll x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    p1 -= min(p1 , p2);
    p2 -= min(p1 , p2);

    if ((x1 * pow(10, p1)) > (x2 * pow(10, p2)))
        cout << ">" << endl;
    else if ((x1 * pow(10, p1)) < (x2 * pow(10, p2)))
        cout << "<" << endl;
    else
        cout << "=" << endl;
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