#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;

    int i = 1;
    while (n)
    {
        if (i % m != 0)
            n--;

        if (n == 0)
        {

            count = i;
            break;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}