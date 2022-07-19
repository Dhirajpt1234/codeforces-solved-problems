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
    int n;
    cin >> n;
    int p[n];
    fr(i, n) cin >> p[i];

    int m;
    cin >> m;
    int q[m];
    fr(i, m) cin >> q[i];

    int psum[n];
    int qsum[m];

    ll s1 = 0;
    ll mx1 = 0;
    fr(i, n)
    {
        s1 += p[i];
        psum[i] = s1;
    }

    ll s2 = 0;
    ll ans = 0;
    fr(i, m)
    {
        s2 += q[i];
        qsum[i] = s2;
    }

    // fr(i, n) cout << psum[i] << ' ';
    // cout << endl;
    // fr(i, m) cout << qsum[i] << ' ';

    ll m1 = *max_element(psum, psum + n);
    ll m2 = *max_element(qsum, qsum + m);
    cout << max((ll)0, m1) + max((ll)0, m2);
}

int32_t main()
{

    // fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        cout << '\n';
    }
}