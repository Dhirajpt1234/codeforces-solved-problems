#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num;
    cin >> num;

    num++;

    while (1)

    {
        int s = num;

        int flag = 1;

        string p = to_string(s);

        for (int i = 0; i < p.length(); i++)
        {
            for (int j = 1; j < p.length(); j++)
            {
                if (p[i] == p[j] && i != j)
                {
                    flag = 0;
                    break;
                }
                if (!flag)
                    break;
            }
        }

        if (flag)
        {
            cout << num;
            break;
        }
        else
        {
            num++;
        }
    }
    return 0;
}