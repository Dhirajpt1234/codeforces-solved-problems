#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

               while (n--)
        {
            // int rem = a <= 26 ? a : b;
            cout << char(n % b + 'a');
        }
        cout << endl;
    }

    return 0;
}
