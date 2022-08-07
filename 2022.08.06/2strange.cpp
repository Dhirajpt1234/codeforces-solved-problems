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
    int n, x;
    cin >> n >> x;

    int arr[n];
    fr(i, n) { cin >> arr[i]; }

    int ans = 0;
    int j = 1;

    int go = 1;

    for (int i = 0; arr[i] % j == 0; i = i % n)
    {
        ans += arr[i];
        if (i + 1 == n)
            j = j * x;
        i++;
    }

    cout << ans;
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

/*
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, i, j = 1, s = 0;
        cin >> n >> x;
        long long a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        for (i = 0; a[i] % j == 0; i = i % n)
        {
            s = s + a[i];
            if (i + 1 == n)
                j = j * x;
            i++;
        }
        cout << s << endl;
    }
}

*/

