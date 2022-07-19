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
    vector<string> arr(n);
    fr(i, n) cin >> arr[i];

    int cnt = 0;

    fr(i, n / 2)
    {
        fr(j, n / 2)
        {
            int zero = 0, one = 0;
            if (arr[i][j] == '0')
                zero++;
            else
                one++;

            if (arr[j][n - 1 - i] == '0')
                zero++;
            else
                one++;

            if (arr[n - 1 - i][n - 1 - j] == '0')
                zero++;
            else
                one++;

            if (arr[n - 1 - j][i] == '0')
                zero++;
            else
                one++;

            cnt += min(zero, one);
        }
    }

    if (n & 1)
    {

        int i = 0, j = n / 2;
        for (int i = 0; i < n / 2; i++)
        {
            int zero = 0, one = 0;
            if (arr[i][j] == '0')
                zero++;
            else
                one++;

            if (arr[j][i] == '0')
                zero++;
            else
                one++;

            if (arr[n - 1 - i][j] == '0')
                zero++;
            else
                one++;

            if (arr[j][n - 1 - i] == '0')
                zero++;
            else
                one++;
            // cout << i << ' ' << j << ' ' << zero << ' ' << one << endl;
            cnt += (4 - max(zero, one));
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