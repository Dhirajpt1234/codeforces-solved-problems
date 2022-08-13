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
    // Consistency Matters !!!!
}

void Dhiraj()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    int c = a, d = b, m = n;
    int ans = INT_MAX;
    // cout << "first\n";
    if (c - x < m)
    {
        m -= (c - x);
        c -= (c - x);
    }
    else
    {
        c -= m;
        m -= m;
    }
    // cout << a << ' ' << b << " " << n << " h 1\n";

    if (m > 0)
    {
        if (d - y < m)

        {
            m -= d - y;
            d -= d - y;
        }
        else
        {
            d -= m;
            m -= m;
        }
    }

    // cout << a << ' ' << b << " " << n << " h 1\n";
    ans = c * d;

    // cout << "second\n";
    if (b - y < n)

    {
        n -= (b - y);
        b -= (b - y);
    }
    else
    {
        b -= n;
        n = 0;
    }
    // cout << a << ' ' << b << " " << n << " h 1\n";

    if (n > 0)
    {
        if (a - x < n)
        {
            n -= (a - x);
            a -= (a - x);
        }
        else
        {
            a -= n;
            n = 0;
        }
    }
    // cout << a << ' ' << b << " " << n << " h 1\n";

    cout << min(ans, a * b);
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