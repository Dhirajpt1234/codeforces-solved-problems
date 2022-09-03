#include <bits/stdc++.h>
using namespace std;

// #define ll long long
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

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
#define frr(i, n) for (int i = n - 1; i >= 0; i--)
#define frs(i, k, n) for (int i = k; i < n; i++)
#define frsr(i, k, n) for (int i = n - 1; i >= k; i--)
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)

const int mod = 1e9 + 7;
const string alpha = "abcdefghijklmnopqrstuvwxyz";

// ToLow --> s[i] | ' '
// ToUp  --> s[i] & '_'
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // Consistency Matters !!!!
}

void Dhiraj()
{
    int n, k, r, c;
    cin >> n >> k >> r >> c;

    char arr[n + 1][n + 1] = {0};
    int rem = (r + c) % k;
    for (int i = r; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout << rem << " rem " << endl;
            int s = i + j;
            if ((s % k) == rem)
            {
                // cout << " --1-- <<" << i << " " << j << endl;
                arr[i][j] = 'X';
            }
            else
            {
                // cout << " --2-- <<" << i << " " << j << endl;
                arr[i][j] = '.';
            }
        }
        rem += 2;
        rem %= k;
    }

    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int s = i + j;
            if (s % k == rem)
            {
                // cout << " --1-- <<" << i << " " << j << endl;
                arr[i][j] = 'X';
            }
            else
            {
                // cout << " --2-- <<" << i << " " << j << endl;
                arr[i][j] = '.';
            }
        }
        rem += 2;
        rem %= k;
    }

    frs(i, 1, n + 1)
    {
        frs(j, 1, n + 1)
        {
            cout << arr[i][j];
        }
        cout << endl;
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