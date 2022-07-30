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
    int n, m;
    cin >> n >> m;

    vector<int> unhappiness(n), freq(n + 1, 0);
    fr(i, n) { cin >> unhappiness[i]; }

    vector<pair<int, int>> groups(m);
    fr(i, m)
    {
        cin >> groups[i].first >> groups[i].second;
        freq[groups[i].first]++;
        freq[groups[i].second]++;
    }

    if (m & 1)
    {
        int ans = INT_MAX;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] & 1)
            {
                ans = min(ans, unhappiness[i - 1]);
            }
        }

        fr(i, m)
        {
            if ((freq[groups[i].first] % 2 == 0) && (freq[groups[i].second] % 2 == 0))
            {
                ans = min(ans, unhappiness[groups[i].first - 1] + unhappiness[groups[i].second - 1]);
            }
        }

        cout << ans;
    }
    else
    {
        cout << 0;
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
        cout << '\n';
    }
}