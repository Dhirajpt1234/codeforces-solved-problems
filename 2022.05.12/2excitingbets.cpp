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
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << ' ' << 0 << '\n';
    }
    else if (a == 0 || b == 0)
    {
        if (a == 0)
            cout << b << ' ' << 0 << '\n';
        else if (b == 0)
            cout << a << ' ' << 0 << '\n';
    }
    else if (abs(a - b) == 1)
        cout << 1 << ' ' << 0 << '\n';
    else
    {
        ll gcd = abs(a - b);
        ll lower = (a / gcd);
        ll higher =((a / gcd) + 1);
        ll ans1 = abs(lower * gcd - a);
        ll ans2 = abs(a - (higher * gcd));
        cout << gcd << ' ' << min(ans1 , ans2) << '\n';
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