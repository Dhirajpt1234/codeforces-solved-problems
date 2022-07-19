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


bool cmp(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b)
{
    if (a.second.first != b.second.first)
        return a.second.first >= b.second.first;
    else
        return a.first <= b.first;
}

void Dhiraj()
{
    ll n;
    cin >> n;
    vector<pair<ll, pair<ll, ll>>> arr(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i].first = i + 1;
        arr[i].second.first = x;
        arr[i].second.second = 0;
    }

    // print(arr);
    sort(arr.begin(), arr.end(), cmp);
    // print(arr);
    int p = 1, ne = -1;
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            arr[i].second.second = ne;
            ne--;
        }
        else
        {
            arr[i].second.second = p;
            p++;
        }
    }
    // print(arr);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (arr[i].second.first * abs(arr[i].second.second));
    }
    sort(arr.begin(), arr.end());
    cout <<2* ans << '\n';
    cout << 0 << ' ';
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].second.second << ' ';
    }
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