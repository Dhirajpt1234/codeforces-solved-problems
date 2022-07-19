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
    int w, h;
    cin >> w >> h;

    int a, b, c, d;
    cin >> a;
    int h1[a];
    fr(i, a) cin >> h1[i];

    cin >> b;
    int h2[b];
    fr(i, b) cin >> h2[i];

    cin >> c;
    int v1[c];
    fr(i, c) cin >> v1[i];

    cin >> d;
    int v2[d];
    fr(i, d) cin >> v2[i];

    int hm = 0, vm = 0;
    hm = max(abs(h1[0] - h1[a - 1]), abs(h2[0] - h2[b - 1]));
    vm = max(abs(v1[0] - v1[c - 1]), abs(v2[0] - v2[d - 1]));

    ll a1 = hm * 1LL * h;
    ll a2 = vm * 1LL * w;

    cout << max(a1, a2);
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