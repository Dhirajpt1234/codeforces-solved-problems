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
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int k, n, m;
    cin >> k >> n >> m;

    int mono[n];
    int poly[m];

    int i = 0, j = 0;

    fr(i, n) cin >> mono[i];
    fr(j, m) cin >> poly[j];

    sort(mono, mono + n);
    sort(poly, poly + m);
    int flag = 1;

    vi ans;

    while (i < n && j < m)
    {
        if (mono[i] <= poly[j])
        {
            if (mono[i] == 0)
            {
                ans.pb(mono[i]);
                k++;
                // cout << 1 << ' ' << i << ' ' << j << ' ' << mono[i] << '\n';
                i++;
            }
            else if (k >= mono[i])
            {
                ans.pb(mono[i]);
                // cout << 1 << ' ' << i << ' ' << j << ' ' << mono[i] << '\n';
                i++;
            }
            else
            {
                flag = 0;
                // cout << 1 << ' ' << i << ' ' << j << ' ' << mono[i] << "  flag 1\n";
                i++;
                break;
            }
        }
        else
        {
            if (poly[j] == 0)
            {
                ans.pb(poly[j]);
                k++;
                // cout << 2 << ' ' << i << ' ' << j << ' ' << poly[j] << '\n';
                j++;
            }
            else if (k >= poly[j])
            {
                ans.pb(poly[j]);
                // cout << 2 << ' ' << i << ' ' << j << ' ' << poly[j] << '\n';
                j++;
            }
            else
            {
                flag = 0;
                // cout << 2 << ' ' << i << ' ' << j << ' ' << poly[j] << "  flag2 \n";
                j++;
                break;
            }
        }
    }

    if (flag)
    {
        if (i == (n))
        {
            for (int l = j; l < m; l++)
            {
                if (poly[l] == 0)
                {
                    ans.pb(poly[j]);
                    k++;
                }

                else if (k >= poly[l])
                {
                    ans.pb(poly[l]);
                }
                else
                    flag = 0;
            }
        }
        else
        {
            for (int l = i; l < n; l++)
            {
                if (mono[l] == 0)
                {
                    ans.pb(mono[l]);
                    k++;
                }
                else if (k >= mono[l])
                {
                    ans.pb(mono[l]);
                }
                else
                    flag = 0;
            }
        }

        if (flag)
        {
            for (int i = 0; i < (n + m); i++)
            {
                cout << ans[i] << " ";
            }
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }
    else
        cout << -1 << '\n';
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

// 5

// 3 2 2
// 2 0
// 0 5

// 4 3 2
// 2 0 5
// 0 6

// 0 2 2
// 1 0
// 2 3

// 5 4 4
// 6 0 8 0
// 0 7 0 9

// 5 4 1
// 8 7 8 0
// 0
