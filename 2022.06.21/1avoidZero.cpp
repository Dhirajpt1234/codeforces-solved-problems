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

    int arr[n];
    ll sum = 0;
    int nz = 0;
    int f = 0, r = 0;
    fr(i, n)
    {
        cin >> arr[i];
        sum += arr[i];
        // if (arr[i] != 0)
        }

    if (sum == 0)
    {
        cout << "NO\n";
        // fr(i, n) cout << arr[i] << ' ';
    }
    else
    {
        cout << "YES\n";
        sort(arr, arr + n);
        //
        int s = 0;
        fr(i, n)
        {
            s += arr[i];
            // cout << "--" << i << "  ||  " << s << endl;
            if (s == 0)
            {
                r = 1;
                f = 0;
                break;
            }

            f = 1;
            r = 0;
        }

        if (f)
            fr(i, n) cout << arr[i] << ' ';
        else
            for (int i = n - 1; i >= 0; i--)
                cout << arr[i] << ' ';
    }
}

int main()
{

    // fastIO;

    DhirajThorat();
    int t = 1;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        cout << '\n';
    }

    return 0;
}