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

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    ll n, m, a, b;
    cin >> n >> m >> a >> b;
    ll d1, d2, d3, d4;

    d1 = abs(a - 1) + abs(b - 1);
    d2 = abs(a - 1) + abs(m - b);
    d3 = abs(n - a) + abs(b - m);
    d4 = abs(n - a) + abs(m - b);

    ll far = max(d1, max(d2, max(d3, d4)));
    if (far == d1 || far == d3)
    {
        // cout << abs(a - 1) << ' ' << abs(b - 1) << ' ' << abs(n - a) << ' ' << abs(b - m) << '\n';
        cout << 1 << ' ' << 1 << ' ' << n << ' ' << m << '\n';
    }
    else
        // cout << abs(a - 1) << ' ' << abs(m - b) << ' ' << abs(n - a) << ' ' << abs(m - b) << '\n';
        cout << 1 << ' ' << m << ' ' << n << ' ' << 1 << '\n';
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
    }

    return 0;
}