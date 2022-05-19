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
    string s;
    cin >> s;
    int ans = 0, flag = 1;
    int last = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        // cout << i << "   ";
        if (s[i] == '0')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '5' || s[j] == '0')
                {

                    flag = 0;
                    ans = i - j - 1;
                    last = s.length() - i - 1;
                    break;
                }
            }
            if (!flag)
                break;
        }

        else if (s[i] == '5')
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (s[j] == '2' || s[j] == '7')
                {
                    flag = 0;
                    ans = i - j - 1;
                    last = s.length() - i - 1;
                    break;
                }
            }
            if (!flag)
                break;
        }
    }

    cout << ans + last << '\n';
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