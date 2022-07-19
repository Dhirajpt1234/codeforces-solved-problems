#include <bits/stdc++.h>
using namespace std;

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
    int n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
    vector<pair<int, int>> len(c), que(c);
    int curr = n;
    for (int i = 0; i < c; i++)
    {
        cin >> que[i].first >> que[i].second;
        int l = que[i].second - que[i].first + 1;
        len[i].first = curr + 1;
        len[i].second = curr + l;
        curr = len[i].second;
    }
    while (q--)
    {
        int x;
        cin >> x;
        for (int i = c - 1; i >= 0; i--)
        {
            if (x >= len[i].first && x <= len[i].second)
            {
                int gap = x - len[i].first;
                x = que[i].first + gap;
            }
        }
        cout << s[x - 1] << "\n";
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