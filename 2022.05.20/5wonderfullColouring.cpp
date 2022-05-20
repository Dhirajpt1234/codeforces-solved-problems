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
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }
#define mod 1e9 + 7
#define countBits(n) (log2(n) + 1)

void DhirajThorat()
{
    // You are the best !!!!
}

inline bool is_same2(string s)
{
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
            return false;
    }
    return true;
}

void Dhiraj()
{
    string s;
    cin >> s;

    int n = s.length();
    if (is_same2(s) && n != 1)
        cout << 1 << '\n';
    else

    {
        int r = 0, g = 0, w = 0;
        map<char, int> m;
        fr(i, n)
        {
            m[s[i]]++;
        }
        int c2 = 0, c1 = 0;
        for (auto &[x, y] : m)
        {
            if (y > 1)
                c2++;
            else
                c1++;
        }

        cout << c2 + (c1 / 2) << '\n';
    }
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