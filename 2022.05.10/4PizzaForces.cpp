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

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    ll n;
    cin >> n;

    // ll small = 0, medium = 0, large = 0, lnm = INT_MAX, lns = INT_MAX, mns = INT_MAX;
    // if (n % 6 == 0)
    //     small = n / 6;
    // else
    //     small = n / 6 + 1;

    // if (n % 8 == 0)
    //     medium = n / 8;
    // else
    //     medium = n / 8 + 1;

    // if (n % 10 == 0)
    //     large = n / 10;
    // else
    //     large = n / 10 + 1;

    // ll stime = 15 * small;
    // ll mtime = 20 * medium;
    // ll ltime = 25 * large;

    // // for large - medium and small
    // ll lnm_l = (n / 10) * 25;

    // if (n - ((n / 10) * 10) <= 6)
    //     lns = lnm_l + 15;
    // else if (n - ((n / 10) * 10) <= 8)
    //     lnm = lnm_l + 20;

    // // for medium - small
    // ll mns_m = (n / 8) * 20;
    // if (n - ((n / 8) * 8) <= 6)
    //     mns = mns_m + 15;

    // ll ans = min(stime, min(mtime, min(ltime, min(lns, min(lnm, mns)))));
    // cout << ans << '\n';

    
    cout << max(6LL, n + 1) / 2 * 5 << '\n';
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
    }

    return 0;
}