#include <bits/stdc++.h>
using namespace std;

// #define ll long long
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

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
#define frr(i, n) for (int i = n - 1; i >= 0; i--)
#define frs(i, k, n) for (int i = k; i < n; i++)
#define frsr(i, k, n) for (int i = n - 1; i >= k; i--)
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)

const int mod = 1e9 + 7;
const string alpha = "abcdefghijklmnopqrstuvwxyz";

// ToLow --> s[i] | ' '
// ToUp  --> s[i] & '_'
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // Consistency Matters !!!!
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

    int n, k;
    cin >> n >> k;

    cout << binExpoIterll(n, k);
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