#include <bits/stdc++.h>
using namespace std;

#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r, a;
        cin >> l >> r >> a;

        ll val = r / a;
        ll val2 = val * a - 1;
        ll ans1 = 0, ans2 = 0;

        if (val2 >= l)
        {
            ans1 = val2 / a + val2 % a;
        }

        ans2 = r / a + r % a;

        cout << max(ans1, ans2)<<endl;
    }

    return 0;
}