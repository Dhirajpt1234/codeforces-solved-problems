#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long
typedef vector<int> vi;
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

// This is iterative method of finding the a raised to b mod m when all the values of a , b , mod are integer.
// for (a/b)%mod --> use ( (a%b) * (binExpoIter(b , mod-2 , mod) ) % mod.
int binExpoIter(int a, int b, int m)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = ((ans % m) * 1LL * (a % m)) % m;
        }
        a = ((a % m) * 1LL * (a % m)) % m;
        b >>= 1;
    }
    return ans;
}

void Dhiraj()
{
    int a, b;
    int ans = INT_MAX, pre = 0;
    cin >> a >> b;

    if (!a)
    {
        cout << 0;
        return;
    }

    if (b == 1)
    {
        b++;
        pre++;
    }

    for (int i = b; i <= b + 30; i++)
    {
        int r = 0;
        // cout << i << " : ";
        int res = 0;
        int A = a, B = i;
        res = i - b;
        while (A > 0)
        {
            // cout << A << endl;
            A /= B;
            res++;
        }
        // cout << "here __ " << res << endl;
        if (ans == res)
            r++;

        ans = min(ans, res);
        if (r == 3)
            break;
    }

    cout << ans + pre;
}

int32_t main()
{

    fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        cout << '\n';
    }
}