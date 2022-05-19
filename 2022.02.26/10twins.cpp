#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    sort(arr, arr + n);

    int sum = 0;
    int num = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        num++;
        sum += arr[i];
        total -= arr[i];

        if (sum > total)
        {
            break;
        }
    }

    cout<<num;

    return 0;
}