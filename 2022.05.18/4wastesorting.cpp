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

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    ll c1, c2, c3, a1, a2, a3, a4, a5;
    cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
    int flag = 1;

    if (c1 < a1 || c2 < a2 || c3 < a3)
        flag = 0;
    c1 -= a1;
    c2 -= a2;
    c3 -= a3;
    cout << "c -- " << c1 << ' ' << c2 << " " << c3 << endl;

    if ((c1 + c3) < a4)
        flag = 0;
    c3 -= a4;
    cout << "c -- " << c1 << ' ' << c2 << " " << c3 << endl;

    if ((c2 + c3) < a5)
        flag = 0;
    c3 -= a5;
    cout << "c -- " << c1 << ' ' << c2 << " " << c3 << endl;

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
    }

    return 0;
}