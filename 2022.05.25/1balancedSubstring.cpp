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
    int n;
    cin >> n;

    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            a++;
        else
            b++;
    }

    if (a == 0 || b == 0)
        cout << -1 << ' ' << -1 << endl;
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((s[i] == 'a' && s[i + 1] == 'b') || s[i] == 'b' && s[i + 1] == 'a')
            {
                cout << i + 1 << ' ' << i + 2 << '\n';
                break;
            }
        }
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