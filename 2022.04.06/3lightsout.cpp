#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define mp make_pair
#define pb push_back

inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

void Dhiraj()
{
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     Dhiraj();
    // }

    int arr[5][5];

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int final[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            final[i][j] = 1;
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                final[i][j]++;
                final[i - 1][j]++;
                final[i][j - 1]++;
                final[i + 1][j]++;
                final[i][j + 1]++;
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << final[i][j] % 2;
        }
        cout << "\n";
    }

    return 0;
}