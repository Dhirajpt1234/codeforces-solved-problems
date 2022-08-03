#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
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
#define mkp make_pair
#define push push_back
#define pop pop_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    string t;
    cin >> t;

    ll n;
    cin >> n;

    vector<string> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<pair<ll, ll>> ans;

    for (ll i = 0; i < t.size(); i++)
    {
        pair<ll, ll> sa;
        ll nextI = -1;
        for (ll j = 0; j < n; j++)
        {
            for (ll k = i; k >= 0 && k > i - (ll)a[j].size(); k--)
            {
                if (t.substr(k, a[j].size()) == a[j])
                {
                    ll currNextI = k + a[j].size();
                    if (currNextI > nextI)
                    {
                        sa = {j + 1, k + 1};
                        nextI = currNextI;
                        break;
                    }
                }
            }
        }

        if (nextI == -1)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            i = nextI - 1;
            ans.push_back(sa);
        }
    }

    cout << ans.size() << endl;

    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
}

int32_t main()
{

    fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        // cout << '\n';
    }
}