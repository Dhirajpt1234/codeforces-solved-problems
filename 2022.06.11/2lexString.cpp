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
    int n, m, k;
    string a, b, c = "";
    cin >> n >> m >> k >> a >> b;

    int i = 0, j = 0;
    int ct1 = 0, ct2 = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (i < n && j < m)
    {
        if (a[i] < b[j] && ct1 < k)
        {
            c.push_back(a[i]);
            ct1++;
            ct2 = 0;
            i++;
        }
        else if (b[j] < a[i] && ct2 < k)
        {
            c.push_back(b[j]);
            ct2++;
            ct1 = 0;
            j++;
        }
        else if (ct1 < k)
        {
            c.push_back(a[i]);
            ct1++;
            ct2 = 0;
            i++;
        }
        else if (ct2 < k)
        {
            c.push_back(b[j]);
            ct2++;
            ct1 = 0;
            j++;
        }
    }

    cout << c;
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