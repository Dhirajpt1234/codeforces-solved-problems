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
    int n;
    cin >> n;

    // vi arr;
    // inputArr(arr);

    // sort(arr.begin(), arr.end());

    // int curr = 1, pre = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i] == arr[i - 1])
    //     {
    //         curr++;
    //         pre = max(curr, pre);
    //     }
    //     else
    //         curr = 0;
    // }
    // cout << " pre = " << pre;

    map<int, int> q;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ++q[x];
    }
    int pre = 0;
    for (auto &[x, y] : q)
    {
        pre = max(pre, y);
    }

    int cnt = 0;
    int repeat = 1;
    int copy = 0, merge = 0;
    int ans = 0;
    while (pre < n)
    {
        // cout << " hi ";
        merge = min(pre, n - pre);
        // copy++;

        ans += merge + 1;
        pre = pre + merge;
    }

    // int ans = 0;
    // while (pre < n)
    // {
    //     int d = min(n - pre, pre);
    //     ans += 1 + d;
    //     pre += d;
    // }

    cout << ans << '\n';
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