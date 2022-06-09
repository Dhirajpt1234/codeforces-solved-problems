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
const int mod = 1e9 + 7;

void DhirajThorat()
{
    // You are the best !!!!
}

vector<bool> isdiv(mod, false);

void Dhiraj()
{
    int n;
    cin >> n;

    int k = 0;
    while (n % 6 == 0)
    {
        n /= 6;
        k++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        k += 2;
    }

    if (n != 1)
        k = -1;

    cout << k;
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