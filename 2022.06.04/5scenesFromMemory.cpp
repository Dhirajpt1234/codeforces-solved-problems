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

const int N = 101;
vector<bool> isprime(N, true);

void Dhiraj()
{
    int k;
    cin >> k;

    string s;
    cin >> s;

    for (int i = 0; i < k; i++)
    {
        if (s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9')
        {
            cout << 1 << '\n';
            cout << s[i];
            return;
        }
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            int x = (s[i] - '0') * 10 + (s[j] - '0');
            
        }
    }
}

int main()
{

    fastIO;

    isprime[0] = false;

    for (int i = 2; i < N; i++)
    {
        if (isprime[i] == true)
            for (int j = (2 * i); j < N; j += i)
            {
                isprime[j] = false;
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