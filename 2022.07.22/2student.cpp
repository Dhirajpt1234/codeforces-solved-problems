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


//This is recursive method of finding the a raised to b mod m when all the values of a , b , mod are integer.
ll binExpoRec(int a, int b)
{
    if (b == 0)
        return 1;
    int result = binExpoRec(a, b / 2);
    if (b & 1)
        return ((a % mod) * ((1LL * result * result) % mod)) % mod;
    return ((1LL * result * result) % mod);
}



void Dhiraj()
{
    bool arr[1001][5];
    int n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
        for (j = 0; j < 5; j++)
            cin >> arr[i][j];
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            int a = 0, b = 0, c = 0;
            for (k = 0; k < n; k++)
            {
                a += (arr[k][i]);
                b += (arr[k][j]);
                c += (arr[k][i] && arr[k][j]);
            }
            if ((a + b - c == n) && (a >= n / 2) && (b >= n / 2))
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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