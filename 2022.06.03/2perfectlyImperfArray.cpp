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

int N = 1e5 + 10;
vector<bool> isSquare(N, false);

void Dhiraj()
{
    int n;
    cin >> n;

    int arr[n];
    fr(i, n) cin >> arr[i];

    fr(i, n)
    {
        if (isSquare[arr[i]] == false)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{

    // fastIO;

    for (int i = 1; i * i < N; i++)
    {
        isSquare[i * i] = true;
    }

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
    }

    return 0;
}