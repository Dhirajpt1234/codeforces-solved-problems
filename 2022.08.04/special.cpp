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
#define mkp make_pair
#define push push_back
#define pop pop_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // You are the best !!!!
}

bool isPowerOfTwo(int n)
{
    if ((n & (n - 1)) == 0)
        return true;
    return false;
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
    int n, k;
    cin >> n >> k;

    if (isPowerOfTwo(k))
    {
        int pow = log2(k) + 1;
        int ans = binExpoIter(n, ceil(log2(k)), mod);
        cout << ans;
        return;
    }
    else
    {
        int ans = 0;
        while (k > 0)
        {
            if (k == 1)
            {
                ans += 1;
                k--;
            }
            else if (k == 2)
            {
                ans += n;
                k -= 2;
            }
            else if (k == 3)
            {

                ans += n + 1;
                k -= 3;
            }
            else if (isPowerOfTwo(k))
            {
                int pow = ceil(log2(k));
                ans += binExpoIter(n, pow, mod);
                k = 0;
            }
            else
            {
                int shift = floor(log2(k));
                int near = (1 << shift);
                int pow = log2(near);
                ans += binExpoIter(n, floor(log2(near)), mod) % mod;
                k -= near;
            }
        }

        cout << ans % mod;
    }
}

int32_t main()
{

    // fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        cout << '\n';
    }
}