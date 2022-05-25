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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return b.second < a.second;
}

void Dhiraj()
{
    int n, ram;
    cin >> n >> ram;

    vii v(n);
    fr(i, n)
    {
        int x;
        cin >> x;
        v[i].first = x;
    }
    fr(i, n)
    {
        int x;
        cin >> x;
        v[i].second = x;
    }

    sort(v.begin(), v.end(), cmp);
    fr(i, n)
    {
        if (ram >= v[i].first)
            ram += v[i].second;
        else
            break;
    }

    cout << ram << '\n';
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