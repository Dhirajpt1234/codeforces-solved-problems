#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a, b, c;
    int sum = 0;
    while (n--)
    {
        cin >> a >> b >> c;

        if ((a + b + c) > 1)
        {
            sum++;
        }
    }
    cout << sum << endl;

    return 0;
}