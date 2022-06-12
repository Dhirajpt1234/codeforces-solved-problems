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
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    vector<pair<char, int>> arr;
    int j = 1;
    for (int i = 0; i < n; i++)
    {

        char x;
        x = s[i];
        if (i == 0)
            arr.pb({x, 1});
        else
        {
            if (arr[j - 1].first == x)
            {
                arr[j - 1].second++;
            }
            else
            {
                arr.pb({x, 1});
                j++;
            }
        }
    }

    // fr(i, arr.size()) cout << arr[i].first << " " << arr[i].second << endl;

    // ll a1 = 0, a2 = 0, a3 = 0, a4 = 0;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     a1 += (arr[i].second * a + b);
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     a2 += (a + b) * arr[i].second;
    // }

    // // for zero;
    // int zero = 0, one = 0;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i].first == '0')
    //     {
    //         a3 += (arr[i].second * a) + b;
    //     }
    //     else
    //         one += arr[i].second;
    // }

    // a3 += (one * a) + b;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i].first == '1')
    //     {
    //         a4 += (arr[i].second * a) + b;
    //     }
    //     else
    //         zero += arr[i].second;
    // }

    // a4 += (zero * a) + b;
    // cout << max(a1, max(a2, max(a3, a4)));
    int m = unique(s.begin(), s.end()) - s.begin();
    cout << n * a + max(n * b, (m / 2 + 1) * b);
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
