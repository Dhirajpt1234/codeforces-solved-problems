#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
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
    int n;
    cin >> n;
    // cout << n << endl;
    string mine, enemy;
    cin >> enemy;
    cin >> mine;
    // cout << enemy << endl;
    // cout << mine << endl;

    int cnt = 0;

    if (mine[0] == '1' && enemy[0] == '0')
        cnt++;
    else if (mine[0] == '1' && enemy[1] == '1')
    {
        cnt++;
        enemy[1] = '0';
    }

    for (int i = 1; i < (n - 1); i++)
    {
        if (mine[i] == '1' && enemy[i] == '0')
            cnt++;
        else if (mine[i] == '1' && (enemy[i - 1] == '1'))
        {
            enemy[i - 1] = '0';
            cnt++;
        }
        else if (mine[i] == '1' && (enemy[i + 1] == '1'))
        {
            enemy[i + 1] = '0';
            cnt++;
        }
    }

    if (mine[n - 1] == '1' && enemy[n - 1] == '0')
        cnt++;
    else if (mine[n - 1] == '1' && enemy[n - 2] == '1')
    {
        cnt++;
        enemy[n - 2] = '0';
    }
    // cout  << endl;

    cout << cnt << '\n';
}

int main()
{

    // fastIO;

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
    }

    return 0;
}