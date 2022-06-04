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
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }
#define countBits(n) (log2(n) + 1)
int mod = 1e7 + 7;

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n;
    cin >> n;

    int a[n];
    int b[n];
    ll s1 = 0, s2 = 0;
    fr(i, n)
    {
        cin >> a[i];
        s1 += a[i];
    }
    fr(i, n)
    {
        cin >> b[i];
        s2 += b[i];
    }

    if (s1 != s2)
        cout << -1 << endl;
    else
    {
        vector<pair<int, int>> arr(100);
        int i = 0, j = 0;
        for (int k = 0; k < n; k++)
        {
            if (a[k] > b[k])
            {
                int r = (i + (a[k] - b[k]));
                while (i < r)
                {
                    arr[i].first = k;
                    i++;
                }
            }
            else if (a[k] < b[k])
            {
                int r = j + (b[k] - a[k]);
                while (j < r)
                {
                    arr[j].second = k;
                    j++;
                }
            }
            else
            {
            }
        }
        cout << i << endl;
        for (int x = 0; x < i; x++)
        {
            cout << arr[x].first + 1 << " " << arr[x].second + 1;
            cout << endl;
        }
    }
}

int main()
{

    // fastIO;

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
    }

    return 0;
}