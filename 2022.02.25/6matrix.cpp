#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];

    int m, n = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                m = i;
                n = j;
            }
        }
    }

    // cout<<m<<" "<<n<<endl;

    int i = m - 2 > 0 ? m - 2 : 2 - m;
    int j = n - 2 > 0 ? n - 2 : 2 - n;

    cout << (i+j) << endl;

    return 0;
}