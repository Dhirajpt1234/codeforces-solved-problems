#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;
    int k = t;

    while (k--)
    {
        int i = 0;
        while (i < n)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char temp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = temp;
                i+=2;
            }
            else
            i++;
        }
    }
    cout << s;

    return 0;
}