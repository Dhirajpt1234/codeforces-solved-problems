#include <bits/stdc++.h>
using namespace std;
#define ll unsigned int
#define f(d) for (ll i = 0; i < n; i++)

int main()
{
    ll n;
    cin >> n;

    ll arr[n];

    f(d)
    {
        cin >> arr[i];
    }

    int curr = 1;
    int lamb = 1;

    for (ll i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            curr++;

            lamb = max(lamb, curr);
        }
        else
            curr = 1;
    }

    cout << lamb << endl;

    return 0;
}