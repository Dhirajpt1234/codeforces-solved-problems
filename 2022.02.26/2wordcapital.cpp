#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    

    if (s[0] > 96 && s[0] < 123)
    {
        cout << s2[s[0]-97];
    }
    else
        cout << s[0];
    for (int i = 1; i < s.length(); i++)
    {
        cout << s[i];
    }

    return 0;
}