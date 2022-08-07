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

bool lucky(int n, int d)
{
    while (n > 0)
    {
        int r = n % 10;
        if (r == d)
        {
            return true;
        }
        n /= 10;
    }

    return false;
}

void Dhiraj()
{
    int n, d;
    cin >> n >> d;

    int arr[n];
    fr(i, n) { cin >> arr[i]; }

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        if (arr[i] >= (10 * d) || (arr[i] % d) == 0)
        {
            cout << "YES\n";
          
        }
        else if (d == 1)
        {
            cout << "YES\n";

        }
        else
        {
            int done = 0;
            for (int j = 0; j <= arr[i]; j += d)
            {
                // cout << " ans : " << temp - j << endl;
                if (lucky(temp - j, d))
                {
                    cout << "YES\n";
                    done = 1;
                    break;
                }
            }

            if (!done)
            {
                cout << "NO\n";
            }
        }
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