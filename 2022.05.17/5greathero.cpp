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

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    if (a.first != b.first)
        return a.first < b.first;
    return b.second < a.second;
}

void Dhiraj()
{
    ll herohealth, heroattack, n;
    cin >> heroattack >> herohealth >> n;
    vector<pair<ll, ll>> m(n);

    for (auto &[x, y] : m)
        cin >> x;
    for (auto &[x, y] : m)
        cin >> y;

    sort(m.begin(), m.end(), cmp);

    int flag = 1;

    // for (ll i = 0; i < n; i++)
    // {
    //     // cout << herohealth << " h0 ";
    //     if (herohealth <= 0)
    //     {
    //         // cout << i << " h1 ";
    //         flag = 0;
    //         break;
    //     }
    //     else
    //     {
    //         // cout << i << " h2 ";
    //         while (herohealth > 0 && m[i].second > 0)
    //         {
    //             herohealth -= m[i].first;
    //             m[i].second -= heroattack;
    //         }
    //         if (herohealth < 0 && m[i].second > 0)
    //         {
    //             flag = 0;
    //             break;
    //         }
    //     }

    //     if (!flag)
    //         break;
    // }

    ll damage = 0;
    for (int i = 0; i < n; i++)
    {
        damage += (m[i].second + heroattack - 1) / heroattack * m[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        if (herohealth - (damage - m[i].first) > 0)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
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

/*

504049 316362 2
456441 615164
205786 1719

*/

