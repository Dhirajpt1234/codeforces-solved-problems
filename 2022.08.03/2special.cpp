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
    vi arr;
    arr.push_back(1);
    arr.push_back(n);
    int i = 1;
    int po = 2;
    while (i < k)
    {
        // cout << "\nSize : " << arr.size() << endl;
        int sq = arr[arr.size() - 1];
        int l = arr.size() - 1;
        for (int j = 0; j < l; j++)
        {
            // cout << "\n sq : " << sq << ' ' << j << endl;
            int temp = ((arr[j] % mod) + (sq % mod)) % mod;
            // cout << " tmp : " << temp << endl;
            arr.push_back(temp);
        }
        arr.push_back(binExpoIterll(n, po));
        po++;
        i += l;
    }

    cout << arr[k - 1];
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