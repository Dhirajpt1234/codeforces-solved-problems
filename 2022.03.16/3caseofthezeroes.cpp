#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int zeroes = 0;
    int ones = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeroes++;
    }

    // cout << zeroes << " " << ones << endl;

    cout << n - 2 * (min(zeroes, ones));

    return 0;
}