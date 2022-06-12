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
    ll n, a, p, b, q;
    cin >> n >> a >> b >> p >> q;

    // if (n % a != 0 && n % b != 0 && (n - a) % b != 0 && (n - b) % a != 0)
    //     cout << "NO";
    // else
    // {
    //     ll a1, a2, a3, a4;
    //     a1 = a2 = a3 = a4 = INT_MAX;

    //     if (n % a == 0)
    //         a1 = n / a * p;
    //     if (n % b == 0)
    //         a2 = n / b * q;
    //     if ((n - a) % b == 0)
    //         a3 = ((n - a) / b * q) + (p);
    //     if ((n - b) % a == 0)
    //         a4 = ((n - b) / a * p) + q;
    //     cout << "YES\n";
    //     cout << min(a1, min(a2, min(a3, a4)));
    // }

    ll ans = INT_MAX, flag = 0, over;
    int m = 0, o = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((a * i + b * j) == n)
            {
                ll temp = (i * p + j * q);
                if (ans > temp)
                {
                    ans = min(temp, ans);
                    m = i;
                    o = j;
                }
                flag = 1;
            }
        }
    }

    // cout << m << ' ' << o << endl;
    if (flag)
    {
        cout << "YES\n";
        cout << ans;
    }
    else
        cout << "NO";
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
        cout << '\n';
    }

    return 0;
}