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
    int n;
    cin >> n;

    int arr[n];

    fr(i, n) { cin >> arr[i]; }

    sort(arr, arr + n);

    vi diff;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
            diff.push_back(abs(arr[i] - arr[i + 1]));
        // s.insert(abs(arr[i] - arr[i + 1]));
    }

    // fr(i, diff.size())
    // {
    //     cout << diff[i] << ' ';
    // }

    // cout << "JIII\n";

    int mx = INT_MAX;
    if (diff.size() == 1)
    {
        cout << diff[0];
        return;
    }
    else if (diff.size() == 0)
    {
        cout << -1;
        return;
    }
    fr(i, diff.size() - 1)
    {
        mx = min(__gcd(diff[i], diff[i + 1]), mx);
    }

    cout << mx;
    //     for (auto x : s)
    //     {
    //         cout << x;
    //          return;
    //     }
    // }
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