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
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    ll n, m, i, j, k, ans = 1, p, q, sum = 0;
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        sum = sum + (i * n) + 1;
        if (sum % (i + 1) != 0)
        {
            ans = 0;
        }
    }
    if (ans == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (i = 1; i <= n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << (j * n) + i << " ";
            }
            cout << endl;
        }
    }
}

int main()
{

    fastIO;

    DhirajThorat();
    int t = 1;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        // cout << '\n';
    }

    return 0;
}