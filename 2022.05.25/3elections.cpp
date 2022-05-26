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
    ll a, b, c;
    cin >> a >> b >> c;
    int m = max(a, max(b, c));
    if (a == max(a, max(b, c)) && (b != m && c != m))
        cout << 0 << ' ';
    // else if (a == max(a, max(b, c)) && (b == m || c == m))
    // cout << 1 << ' ';
    else
        cout << abs(a - m) + 1 << ' ';

    if (b == max(b, max(a, c)) && (a != m && c != m))
        cout << 0 << ' ';
    // else if (b == max(b, max(a, c)) && (a == m || c == m))
    //     cout << 1 << endl;
    else
        cout << abs(b - m) + 1 << ' ';

    if (c == max(c, max(b, a)) && (b != m && a != m))
        cout << 0 << ' ';
    // else if (c == max(c, max(b, a)) && (b == m || a == m))
    //     cout << 1 << endl;
    else
        cout << abs(c - m) + 1 << ' ';
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
        cout << '\n';
    }

    return 0;
}