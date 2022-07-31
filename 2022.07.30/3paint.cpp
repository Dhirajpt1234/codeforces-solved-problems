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

void Dhiraj()
{
    int n;
    cin >> n;

    vi arr(n);
    fr(i, n) { cin >> arr[i]; }

    int odd = arr[1];
    int even = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (i & 1)
            odd = __gcd(odd, arr[i]);
        else
            even = __gcd(even, arr[i]);
    }
    int flag = 1;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] % odd == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << odd;
        return;
    }

    flag = 1;
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] % even == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
    {
        cout << even;
        return;
    }

    cout << 0;
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