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
int mod = 1e7 + 7;
void DhirajThorat()
{
    // You are the best !!!!
}
int N = 1e7 + 10;

vector<bool> isPrime(N, true);

void Dhiraj()
{
    int n;
    cin >> n;
    ll sum = 0;
    int arr[n];
    fr(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
    };

    if (isPrime[sum] == false)
    {
        cout << n << endl;
        fr(i, n)
        {
            cout << (i + 1) << " ";
        }
    }
    else
    {
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            if (isPrime[sum - arr[i]] == false)
            {
                pos = i;
                break;
            }
        }

        cout << n - 1 << endl;
        fr(i, n)
        {
            if (i == pos)
                continue;

            cout << i + 1 << ' ';
        }
    }
}

int main()
{

    // fastIO;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = (2 * i); j < N; j += i)
            {
                isPrime[j] = false;
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