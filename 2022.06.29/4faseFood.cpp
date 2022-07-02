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
    int arr[3];
    fr(i, 3) cin >> arr[i];
    sort(arr, arr + 3, greater<int>());

    int ct = 0;
    for (int mask = 1; mask <= 7; mask++)
    {
        int flag = 1;
        for (int i = 0; i < 3; i++)
        {
            if ((((1 << i) & mask)))
            {
                if ((arr[i] > 0))
                {
                }
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            // cout << " mask = " << mask << endl;
            ct++;
            for (int i = 0; i < 3; i++)
            {
                if (((1 << i) & mask))
                {
                    arr[i]--;
                }
            }
        }
    }

    cout << ct;
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
        cout << '\n';
    }

    return 0;
}