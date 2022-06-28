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
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;
// ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

void DhirajThorat()
{
    // You are the best !!!!
}

const int N = 1e7 + 10;
vector<int> isprime(N, 0);

void Dhiraj()
{
    ll n, k;
    cin >> n >> k;

    while (k && ((n % 2) != 0))
    {
        n += isprime[n];
        k--;
    }

    cout << n + (2 * k);
}

int main()
{
    // fastIO;
    // isprime[0] = isprime[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i] == 0)
        {
            // isprime[i] = i;
            for (int j = (i); j < N; j += i)
            {
                if (isprime[j] == 0)
                    isprime[j] = i;
            }
        }
    }

    // fr(i, 100)
    //         cout
    //     << i << ' ' << isprime[i] << endl;
    DhirajThorat();
    int t = 1;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        cout << '\n';
    }

    return 0;
}