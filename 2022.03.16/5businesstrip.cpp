#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    int flag = 0;

    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 12);

    if (k == 0)
        cout << 0;
    else
    {
        int count = 0;
        int sum = 0;
        for (int i = 11; i >= 0; i--)
        {
            sum += arr[i];
            count++;
            if (sum >= k)
            {
                cout << count << endl;
                flag = 1;
                break;
            }
        }
    }

    if (!flag && k)
        cout << -1 << endl;

    return 0;
}