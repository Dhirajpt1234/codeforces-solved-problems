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


void Dhiraj()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll z = 0, o = 0, ct = 1;
    for (int i = 0; i < n; i++)

    {
        if (s[i] == '1')
            o++;
        else
            z++;
    }

    if (z == 0 || o == 0)
    {
        cout << n;
        return;
    }

    ll i = 0, j = 1;
    ll ans = 0;
    ll waste = 0;
    ll wct = 0;
    while (j < n)
    {
        if (s[i] == s[j])
        {
            ct++;
            // cout << j << "  hii  1  " << ct << endl;
            j++;
        }
        else
        {
            // cout << j << "  hii  " << ct << endl;
            i = j;
            j++;
            // j += 2;
            int sub = ct * (ct + 1) / 2 - ct;
            wct += ct;
            waste += sub;
            ct = 1;
        }
    }

    // cout << j << "  hii  " << ct << endl;
    if (ct > 1)
    {
        i = j;
        j++;
        int sub = ct * (ct + 1) / 2;
        wct += ct;
        waste += sub - ct;
    }

    ans = n * (n + 1) / 2;
    ans -= waste;
    cout << ans;
}

int main()
{

    // fastIO;

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