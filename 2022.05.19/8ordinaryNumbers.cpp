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
#define mod 1e9 + 7

// int dp[1000000000];

void DhirajThorat()
{
    // You are the best !!!!
}

bool is_odinary(int n)
{
    int check = n % 10;
    while (n > 0)
    {
        if (n % 10 != check)
            return false;
        check = n % 10;
        n /= 10;
    }
    return true;
}

void Dhiraj()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i <= n; i = i * 10 + 1)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j * i <= n)
                cnt++;
        }
    }
    cout << cnt << '\n';
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