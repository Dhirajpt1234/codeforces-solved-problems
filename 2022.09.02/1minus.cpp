#include <bits/stdc++.h>
using namespace std;

// #define ll long long
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

#define fastIO                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define maxOfVec(a) *max_element(a.begin(), a.end())
#define minOfVec(a) *min_element(a.begin(), a.end())
#define mkp make_pair
#define push push_back
#define pop pop_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define frr(i, n) for (int i = n - 1; i >= 0; i--)
#define frs(i, k, n) for (int i = k; i < n; i++)
#define frsr(i, k, n) for (int i = n - 1; i >= k; i--)
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)

const int mod = 1e9 + 7;
const string alpha = "abcdefghijklmnopqrstuvwxyz";

// ToLow --> s[i] | ' '
// ToUp  --> s[i] & '_'
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // Consistency Matters !!!!
}

void Dhiraj()
{
    int a, s;
    cin >> a >> s;
    vector<int> ans;
    while (s > 0)
    {
        int u = s % 10;
        s /= 10;

        int l = a % 10;
        a /= 10;
        if (u >= l)
        {
            ans.emplace_back(u - l);
        }
        else
        {

            u = u + (s % 10) * 10;
            s /= 10;

            if (l < u && u >= 10 && u < 19)
            {
                ans.emplace_back(u - l);
            }
            else
            {
                cout << -1;
                return;
            }
        }
    }

    for (auto it : ans)
        cout << it;
    cout << endl;

    if (a > 0)
    {
        cout << -1;
        return;
    }

    while (ans.back() == 0)
    {
        ans.pop_back();
    }

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];
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