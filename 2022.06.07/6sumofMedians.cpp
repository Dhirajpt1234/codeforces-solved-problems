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
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n, k;
    cin >> n >> k;

    ll ans1 = 0;
    ll ans2 = 0;

    int arr[n * k];
    fr(i, n * k) cin >> arr[i];

    ll med = (n + 1) / 2;
    // cout << " med : " << med << endl;

    for (int i = 0; i < (n * k); i += n)
    {
        ans1 += arr[i + med - 1];
        // cout << " ans1 : " << ans1 << ' ' << arr[i + med - 1] << '\n';
    }

    ll m = k;
    for (int i = (n * k) - 1; i >= 0 && m-- && (n != 2); i -= (n - 1))
    {
        ans2 += arr[i - (n - med)];
        // cout << " ans2 : " << ans2 << ' ' << arr[i - (n - med)] << '\n';
    }

    cout << max(ans1, ans2);
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