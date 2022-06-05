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
int N = 1e7 + 10;
vector<bool> isprime(N, true);

inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
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
    ;

    int n;
    cin >> n;

    string s;
    cin >> s;

    ll r = 0;
    for (int i = 0; i < s.length(); i++)
    {
        r = int(s[i]) + (10 * r);
        if (isprime[r] == false)
        {
            cout << i + 1 << '\n';
            cout << " -- " << r;
            break;
        }
    }
}

int main()
{

    // fastIO;

    isprime[0] = isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i] == true)
        {
            for (int j = (2 * i); j < N; j += i)
            {
                isprime[j] = false;
            }
        }
    }

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