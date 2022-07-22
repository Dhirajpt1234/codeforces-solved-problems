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

    string s, r;
    cin >> s >> r;

    int arr[n];
    int ans = 0;
    fr(i, n)
    {
        if ((s[i] - '0') == (r[i] - '0'))
        {
            if (s[i] - '0' == 0)
            {
                arr[i] = 1;
            }
            else
                arr[i] = 0;
        }
        else
        {
            arr[i] = -1;
            ans += 2;
        }
    }

    fr(i, n)
    {

        if (i == n - 1)
        {
            if (arr[i] == -1)
            {
                continue;
            }
            else
            {
                ans += arr[i];
            }
        }
        else
        {
            if (arr[i] == -1)
            {
                continue;
            }
            else
            {
                if (arr[i] == 0 && arr[i + 1] == 1 && i < (n - 1))
                {
                    ans += 2;
                    i++;
                }
                else if (arr[i] == 1 && arr[i + 1] == 0 && i < (n - 1))
                {
                    ans += 2;
                    i++;
                }
                else
                    ans += arr[i];
            }
        }
    }

    cout << ans;
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
