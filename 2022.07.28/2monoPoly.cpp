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
    int n, m, k;
    cin >> k >> n >> m;
    int k1 = k;

    vector<pair<int, int>> arr(n + m);
    fr(i, (n + m))
    {
        cin >> arr[i].first;
        if (i < n)
        {
            arr[i].second = 1;
        }
        else
            arr[i].second = 2;
    }
    int f = 1;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n + m; i++)
    {
        if (arr[i].first == 0)
            k++;
        else if (arr[i].first > k)
        {
            f = 0;
            break;
        }
    }

    if (f)
    {
        int s;
        for (int i = 0; i < (n + m); i++)
        {

            if (arr[i].first != 0)
            {
                s = i;
                break;
            }
        }

        while (k1 < arr[s].first)
        {
            cout << 0 << ' ';
            k1++;
        }
        while (s < (n + m))
        {
            if (arr[s].first <= k1)
            {
                cout << arr[s].first << ' ';
                s++;
            }
            else
            {
                int i = k1;
                while (k1 < arr[s].first)
                {
                    cout << 0 << ' ';
                    k1++;
                }
            }
        }
    }
    else
        cout << -1;
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