#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll curr = 0;
        ll large = 0;
        int k = 2;
        while (k < 30)
        {
            ll power = pow(2, k);
            if (n % (power - 1) == 0)
            {
                curr = n / (pow(2, k) - 1);
            }
            if (curr > large)
            {
                large = curr;
            }

            k++;
        }

        cout << large << endl;
    }
    return 0;
}