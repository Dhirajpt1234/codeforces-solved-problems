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
#define fr(i , n) for(int i=0;i<n;i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))


void DhirajThorat()
{
//You are the best !!!!
}

void Dhiraj()
{
    ll x, n;
    cin >> x >> n;
    if (x % 2 == 0)
    {
        if (n % 4 == 0)
            cout << x << "\n";
        else if (n % 4 == 1)
            cout << x - n << "\n";
        else if (n % 4 == 2)
            cout << x + 1 << "\n";
        else
            cout << x + n + 1 << "\n";
    }
    else
    {
        if (n % 4 == 0)
            cout << x << "\n";
        else if (n % 4 == 1)
        {
            ll a = n / 4;
            cout << (a * 4 + 2) + x - 1 << "\n";
        }
        else if (n % 4 == 2)
            cout << x - 1 << "\n";
        else
            cout << x - n - 1 << "\n";
    }


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