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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

void Dhiraj()
{
    int n;
    cin >> n;

    vii arr(n);
    fr(i, n)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end(), cmp);
    vi ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].first == arr[i].second)
            ans.push_back(arr[i].first);
        else if (arr[i].first == arr[i + 1].first)
        {
            ans.push_back(arr[i + 1].second + 1);
        }
        else if (arr[i].second == arr[i + 1].first)
        {
            ans.push_back(arr[i].first);
        }
        else if (arr[i].second == arr[i + 1].second)
        {
            ans.push_back(arr[i].first);
        }
    }

    // cout << "ans : ";
    fr(i, ans.size())
    {
        cout << arr[i].first << ' ' << arr[i].second << ' ';
        cout << ans[i] << '\n';
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
        // cout << '\n';
    }
}