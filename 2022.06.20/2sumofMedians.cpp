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
    ll arr[n];
    fr(i, n) cin >> arr[i];

    map<ll, ll> a;
    map<ll, ll> b;
    ll mx1 = INT_MIN, mx2 = INT_MIN;

    fr(i, n)
    {
        if (a.find(arr[i]) != a.end())
        {
            b[arr[i]]++;
            if (mx2 < arr[i])
                mx2 = max(arr[i], mx2);
        }
        else
        {
            a[arr[i]]++;
            if (mx1 < arr[i])
                mx1 = max(mx1, arr[i]);
        }
    }
    ll i = 0;
    ll m1 = -1, m2 = -1;

    // for (auto &[x, y] : a)
    //     cout << x << '-';
    // cout << endl;
    // for (auto &[x, y] : b)
    //     cout << x << '|';
    // cout << endl;

    for (auto &[x, y] : a)
    {
        if (x != i)
        {
            m1 = i;
            break;
        }
        i++;
    }
    i = 0;
    for (auto &[x, y] : b)
    {
        if (x != i)
        {
            m2 = i;
            break;
        }
        i++;
    }
    // cout << "|||m1 = " << m1 << endl;
    // cout << "||m2 = " << m2 << endl;

    if (m1 == -1 && (!a.empty()))
        m1 = mx1 + 1;
    else if (m1 == -1 && a.empty())
        m1 = 0;
    if (m2 == -1 && (!b.empty()))
        m2 = mx2 + 1;
    else if (m2 == -1 && b.empty())
        m2 = 0;

    // cout << "--m1 = " << m1 << endl;
    // cout << "--m2 = " << m2 << endl;

    cout << m1 + m2;
}

int main()
{

    fastIO;

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

#include <bits\stdc++.h>
using namespace std;
int t, n, i, j, x, a[102];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i <= 100; i++)
            a[i] = 0;
        while (n--)
            cin >> x, a[x]++;
        for (i = 0; a[i] > 1; i++)
            ;
        for (j = i; a[j] > 0; j++)
            ;
        cout << (j + i) << "\n";
    }
    return 0;
}