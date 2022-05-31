#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef pair<string, string> pss;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<long long> vl;
typedef vector<vl> vvl;

#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define maxOfVec(a) *max_element(a.begin(), a.end())
#define minOfVec(a) *min_element(a.begin(), a.end())
#define mp make_pair
#define pb push_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }
#define countBits(n) (log2(n) + 1)
int mod = 1e7 + 7;

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n, m, r, c;
    cin >> n >> m >> r >> c;

    int one = 0, two = 0, zero = 0;
    char arr[n][m];

    fr(i, n)
    {
        fr(j, m)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'B')
                two = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i][c - 1] == 'B')
        {
            one = 1;
            break;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (arr[r - 1][i] == 'B')
        {
            one = 1;
            break;
        }
    }

    if (arr[r - 1][c - 1] == 'B')
        zero = 1;

    if (zero)
        cout << 0;
    else if (one)
        cout << 1;
    else if (two)
        cout << 2;
    else
        cout << -1;
}

int main()
{

    fastIO;

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        cout << endl;
    }

    return 0;
}