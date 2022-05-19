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
    string s, t;
    cin >> s >> t;

    int flag = 1, prelast = s.length();

    int last = s.length();
    for (int i = (t.length() - 1); i >= 0; i--)
    {
        for (int j = s.length() - 1; j >= 0; j--)
        {
            if (s[j] == t[i])
            {
                last = j;
                // cout << s[j] << " " << j << "---";
                s.erase(j, 1);
                break;
            }
        }
        if (last >= prelast)
        {
            flag = 0;
            break;
        }
        prelast = last;
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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