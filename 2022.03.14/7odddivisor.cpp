#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ull n;
        cin >> n;
        if (n == 1 || n == 2)
            cout << "NO" << endl;
        else if ((n % 2) != 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 9 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}