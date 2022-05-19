#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int fact(ll n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;

        cin >> n;

        cout << fact(n) << endl;
    }

    return 0;
}