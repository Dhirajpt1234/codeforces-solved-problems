#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int num = arr[k - 1];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= num && arr[i])
        {
            sum++;
        }
        // else
        // {
        //     break;
        // }
    }

    cout << sum << endl;

    return 0;
}