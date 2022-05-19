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
#define maxOfArr(a) *max_element(a, a + n)
#define minOfArr(a) *min_element(a, a + n)
#define mp make_pair
#define pb push_back
#define fr(i, n) for (int i = 0; i < n; i++)
// #define all(v) (v.begin() , v.)
#define lcm(a, b) (a * b) / (__gcd(a, b))

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n;
    cin >> n;

    int arr[n];
    int one = 0, zero = 0;
    fr(i, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            one++;
        else if (arr[i] == 0)
            zero++;
    }

    ll ans = one * pow(2, zero);
    cout << ans << '\n';
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