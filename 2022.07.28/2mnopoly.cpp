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
    int n, m, k;
    cin >> k >> n >> m;

    int mono[n];
    fr(i, n) { cin >> mono[i]; }

    int poly[m];
    fr(i, m) { cin >> poly[i]; }

    int i = 0, j = 0;
    vi ans;

    while (i < n || j < m)
    {
        if (i < n && j < m)
        {
            if (mono[i] == 0)
            {
                ans.pb(mono[i]);
                i++;
                k++;
            }
            else if (poly[j] == 0)
            {
                ans.push_back(poly[j]);
                j++;
                k++;
            }
            else
            {
                if (mono[i] < poly[j] && mono[i] <= k)
                {
                    ans.push_back(mono[i]);
                    i++;
                }
                else if (poly[j] <= mono[i] && poly[j] <= k)
                {
                    ans.push_back(poly[j]);
                    j++;
                }
                else
                {
                    cout << -1;
                    return;
                }
            }
        }
        else if (i < n)
        {
            if (mono[i] == 0)
            {
                ans.push_back(mono[i]);
                i++;
                k++;
            }
            else
            {
                if (mono[i] <= k)
                {
                    ans.push_back(mono[i]);
                    i++;
                }
                else
                {
                    cout << -1;
                    return;
                }
            }
        }
        else
        {
            if (poly[j] == 0)
            {
                ans.push_back(poly[j]);
                k++;
                j++;
            }
            else
            {
                if (poly[j] <= k)
                {
                    ans.push_back(poly[j]);
                    j++;
                }
                else
                {
                    cout << -1;
                    return;
                }
            }
        }
    }

    for (auto i : ans)
        cout << i << ' ';
}

int32_t main()
{

    fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        cout << '\n';
    }
}