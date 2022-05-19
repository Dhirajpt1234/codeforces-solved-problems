#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;
    int a[n];
    int b[n];

    int curr = 0;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        curr = curr - a[i] + b[i];
        if (curr > max)
        {
            max = curr;
        }
    }

    cout << max << endl;

    return 0;
}