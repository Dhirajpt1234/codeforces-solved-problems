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
#define mkp make_pair
#define push push_back
#define pop pop_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // Consistency Matters !!!!
}

void Dhiraj()
{
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            if (i >= 0 && i < n - 2 && s[i + 1] == 'b' && s[i + 2] == 'c')
                ans++;
        }
    }

    while (q--)
    {
        int i;
        cin >> i;
        i--;

        char c;
        cin >> c;

        // if there was before
        if (s[i] == 'a' && i < n - 2)
        {
            if (s[i + 1] == 'b' && s[i + 2] == 'c')
                ans--;
        }
        else if (s[i] == 'b' && i > 0 && i < n - 1)
        {
            if (s[i - 1] == 'a' && s[i + 1] == 'c')
                ans--;
        }
        else if (s[i] == 'c' && i > 1)
        {
            if (s[i - 2] == 'a' && s[i - 1] == 'b')
                ans--;
        }

        // now condn
        s[i] = c;
        if (s[i] == 'a' && i < n - 2)
        {
            if (s[i + 1] == 'b' && s[i + 2] == 'c')
                ans++;
        }
        else if (s[i] == 'b' && i > 0 && i < n - 1)
        {
            if (s[i - 1] == 'a' && s[i + 1] == 'c')
                ans++;
        }
        else if (s[i] == 'c' && i > 1)
        {
            if (s[i - 2] == 'a' && s[i - 1] == 'b')
                ans++;
        }

        cout << ans << endl;
    }
}

int32_t main()
{

    fastIO;
    DhirajThorat();
    int O_O = 1;
    // cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        // cout << '\n';
    }
}