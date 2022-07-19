#include <bits/stdc++.h>
using namespace std;

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
// #define mp make_pair
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

    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        if (x < i)
        {
            if (mp.find(x) == mp.end())
            {
                mp[x] = i;
            }
        }
    }

    vector<pair<int, int>> arr(mp.size());
    int i = 0;
    for (auto &[x, y] : mp)
    {
        arr[i] = make_pair(x, y);
        i++;
    }

    // for (int i = 0; i < arr.size(); i++)
    //     cout << arr[i].first << ' ' << arr[i].second << endl;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i].first < arr[i].second) && (arr[j].first < arr[j].second) && (arr[i].second < arr[j].first))
                cnt++;
        }
    }

    cout << cnt;
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