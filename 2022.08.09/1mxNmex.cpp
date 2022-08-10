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
    int n, k;
    cin >> n >> k;

    set<int> s;
    fr(i, n)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    int i = 0;
    int me = n;
    int mx = -1;
    for (auto it : s)
    {
        if (it != i)
        {
            me = i;
            break;
        }
        i++;
    }

    for (auto it : s)
    {
        mx = max(it, mx);
    }

    // cout << "ans : " << me << ' ' << mx << endl;
    if (k == 0)
    {
        cout << s.size();
    }
    else if (me == 0)
    {
        if (s.find((mx + 1) / 2) == s.end())
            cout << s.size() + 1;
        else
            cout << s.size();
    }
    else if (me == n)
    {
        cout << s.size() + k;
    }
    else
    {
        int num = (mx + me + 1) / 2;
        if (s.find(num) == s.end())
        {
            cout << s.size() + 1;
        }
        else
            cout << s.size();
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