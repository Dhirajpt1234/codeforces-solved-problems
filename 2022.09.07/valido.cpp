#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs((s[i] - s[i + 1]) == 1))
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}
int main()
{
    solve();
    cout << endl;
    return 0;
}