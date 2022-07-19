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

    string s;
    cin >> s;
    int one = 0, two = 0;
    fr(i, n)
    {
        if (s[i] == '1')
            one++;
        else
            two++;
    }
    if (two < 3 && two > 0)
    {
        cout << "NO\n";
        return;
    }
    char arr[n][n];
    fr(j, n)
    {
        fr(i, n)
        {
            arr[i][j] = '0';
        }
    }

    for (int i = 0; i < n; i++)
    {
        int done = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i][j] = 'X';
                continue;
            }
            if (arr[i][j] == '+')
                done = 1;
            if (s[i] == '1' || s[j] == '1')
                arr[i][j] = '=';
            else
            {
                if (arr[i][j] == '0' && !done)
                {
                    arr[i][j] = '+';
                    done = 1;
                    arr[j][i] = '-';
                }
                else if(arr[i][j] == '0')
                {
                    arr[i][j] = '-';
                    arr[j][i] = '+';
                }
            }
        }
    }
    cout << "YES\n";
    fr(i, n)
    {
        fr(j, n)
        {
            cout << arr[i][j];
        }
        cout << '\n';
    }
}

int main()
{

    fastIO;

    DhirajThorat();
    int t = 1;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        // cout << '\n';
    }

    return 0;
}