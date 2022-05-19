#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int start = 1;
    int i = 0;

    while (i < s.length())
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (!start)
            {
                cout << " ";
            }

            i = i + 3;
        }
        else
        {
            start = 0;
            cout << s[i];
            i = i + 1;
        }
    }
    cout << endl;

    return 0;
}