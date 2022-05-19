#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);

    int count = INT_MAX;

    int i = 0;
    int k = n-1;

    while (k < m)
    {
        if (arr[k] - arr[i] < count)
        {
            count = arr[k] - arr[i];
        }

        i++;
        k++;
    }

    cout << count << endl;

    return 0;
}