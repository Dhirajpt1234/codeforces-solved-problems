#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;

    cin >> s1 >> s2;
    int count = 0;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    for (int i = 0; i < s1.length(); i++)
    {
        //   if(s1[i] - s2[i] == 0)

        if (s1[i] - s2[i] > 0)
        {
            count++;
            break;
        }
        else if (s1[i] - s2[i] < 0)
        {
            count--;
            break;
        }
    }

    if (count < 0)
        count = -1;
    else if (count > 0)
        count = 1;

    cout << count << endl;

    return 0;
}