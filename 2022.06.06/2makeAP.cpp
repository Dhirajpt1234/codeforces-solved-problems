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

void Dhiraj()
{
    int a, b, c;
    cin >> a >> b >> c;

    int d = 0, k = 0;

    // for a
    d = c - b;
    k = (b - d);
    if (k % a == 0 && k && k >= a)
    {
        cout << "YES";
        return;
    }

    // for c
    d = b - a;
    k = b + d;
    if (k % c == 0 && k && k >= c)
    {
        cout << "YES";
        return;
    }

    // for b
    d = (c - a);
    if (d & 1)
    {
        cout << "NO";
        return;
    }
    else
    {
        d /= 2;
        k = a + d;
        if (k % b == 0 && k && k >= b)
        {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
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
        cout << '\n';
    }

    return 0;
}