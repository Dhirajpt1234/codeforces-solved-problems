#include <bits/stdc++.h>
using namespace std;
int n, i, j, a, b[9][9];
main()
{
    for (i = 1; i < 4; i++)
        for (j = 1; j < 4; j++)
        {
            cin >> a;
            if (a % 2)
            {
                b[j][i]++;
                b[j + 1][i]++;
                b[j][i + 1]++;
                b[j - 1][i]++;
                b[j][i - 1]++;
            }
        }
    for (i = 1; i < 4; i++)
    {
        for (j = 1; j < 4; j++)
            cout << 1 - b[j][i] % 2;
        cout << endl;
    }
}