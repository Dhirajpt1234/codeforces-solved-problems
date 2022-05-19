#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int curr = 1;
    int max = 1;
    for (int i = 1; i < s.length(); i++)
    {

        if (s[i] == s[i - 1])
        {
            curr++;
            if (curr > max)
                max = curr;
        }
        else
            curr = 1;
    }

    // cout << max << endl;

    if (max >= 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}