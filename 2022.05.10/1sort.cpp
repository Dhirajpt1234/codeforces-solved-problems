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
    int n;
    cin >> n;

    vi a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int hash[n];

    for (int i = 0; i < n; i++)
    {
        hash[i] = a[i] - b[i];
    }
    int flag = 1;
    fr(i, n)
    {
        if (hash[i] == -1 || hash[i] == 0)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        cout << "YES\n";
    else
    {
        // fr(i, n)
        // {
        //     if (hash[i] == -1 || hash[i] == 0)
        //         flag = 1;
        //     else
        //     {
        //         flag = 0;
        //         break;
        //     }
        // }
        // if (flag)
        //     cout << "YES\n";
        // else
        cout << "NO\n";
    }

    // map<int, int> m;

    // fr(i, n)
    // {
    //     m[hash[i]]++;
    // }

    // if ((m[-1] >= 0 && m[1] == 0) || (m[1] >= 0 && m[-1] == 0))
    // {
    //     cout << "YES\n";
    // }
    // else
    //     cout << "NO7\n";
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