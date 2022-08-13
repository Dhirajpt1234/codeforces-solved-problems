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
    int n;
    cin >> n;

    vi arr(n);
    map<int, int, greater<int>> mp;
    fr(i, n)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }

    // for (auto &[x, y] : mp)
    // {
    //     cout << x << ' ' << y << endl;
    // }

    int end = n;
    vi ans;
    int no = n;
    while (no > 0)
    {
        int st;
        auto it = mp.begin();
        st = it->second;
        for (int i = st; i < end; i++)
        {
            ans.push_back(arr[i]);
            mp.erase(arr[i]);
            no--;
        }
        end = st;
    }

    fr(i, n) { cout << ans[i] << ' '; }
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