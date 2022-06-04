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
ll mod = 1e18 + 7;

void DhirajThorat()
{
    // You are the best !!!!
}

long long binMultiply(long long a, long long b)
{
    long long ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = ((ans % mod) + (a % mod)) % mod;
        }
        a = ((a % mod) + (a % mod)) % mod;
        b >>= 1;
    }
    return ans;
}

// we are using this fun when value of a or mod is upto 1e18 .
// at that time while multiplying the value of the multipln can exceed 1e18 which cannot be store. that's why we are using binMultiply
long long binExpoIterll(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (binMultiply(ans, a)) % mod;
        }
        a = (binMultiply(a, a)) % mod;
        b >>= 1;
    }
    return ans;
}

void Dhiraj()
{
    ll n;
    cin >> n;
    ll even = 0, odd = 0;
    int arr[n];
    fr(i, n)
    {
        cin >> arr[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while ((arr[i] % 2) == 0)
        {
            arr[i] /= 2;
            cnt++;
        }
    }

    sort(arr, arr + n);

    // fr(i, n)
    //         cout
    //     << arr[i] << ' ';
    // cout << endl;

    ll ans = 0;

    for (int i = 0; i < n - 1; i++)
    {
        ans += arr[i];
    }

    ans += arr[n - 1] * binExpoIterll(2, cnt);
    cout << ans;
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
        cout << '\n';
    }

    return 0;
}
