#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
typedef vector<int> vi;
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
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;

    vector<pair<ll, ll>> len(c), query(c);
    ll curr = n;

    for (ll i = 0; i < c; ++i)
    {
        cin >> query[i].first >> query[i].second;
        ll qlen = query[i].second - query[i].first + 1;

        len[i].first = curr + 1, len[i].second = curr + qlen;
        curr = len[i].second;
    }

    for (int i = 0; i < c; i++)
    {
        cout << len[i].first << " " << len[i].second << endl;
    }

    while (q--)
    {
        ll idx;
        cin >> idx;

        for (ll i = c - 1; i >= 0; --i)
        {
            if (idx >= len[i].first && idx <= len[i].second)
            {
                ll gap = idx - len[i].first;
                idx = query[i].first + gap;
            }
        }

        // cout << s[idx - 1] << endl;
    }
}

int32_t main()
{

    // fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        cout << '\n';
    }
}