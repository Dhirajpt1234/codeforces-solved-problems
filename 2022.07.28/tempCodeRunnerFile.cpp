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
    // You are the best !!!!
}

void Dhiraj()
{
    string s;
    cin >> s;

    int pos1 = -1, pos2 = -1;

    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] != '0' && s[i + 1] != '0')
        {
            pos1 = i;
            break;
        }
    }

    for (int i = s.length() - 1; i > 0; i--)
    {
        if ((s[i] - '0' + s[i - 1] - '0') > 9)
        {
            pos2 = i - 1;
            break;
        }
    }

    if (pos2 != -1)
    {
        cout << s.substr(0, pos2) << (s[pos2] - '0' + s[pos2 + 1] - '0') << s.substr(pos2 + 2, s.length() - pos2 - 2);
    }
    else
    {
        cout << s.substr(0, pos1) << (s[pos1] - '0' + s[pos1 + 1] - '0') << s.substr(pos1 + 2, s.length() - pos1 - 1);
    }
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