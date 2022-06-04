// 900
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

int imperfectness(string s)
{
    int cnt = 0;
    fr(i, s.length() - 1)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    return cnt;
}

void Dhiraj()
{
    int n;
    cin >> n;

    char arr[n];
    fr(i, n) cin >> arr[i];

    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 'B' || arr[i] == 'R')
        {
            s1.push_back(arr[i]);
            s2.push_back(arr[i]);
        }
        else if (i & 1)
        {
            s2.push_back('R');
            s1.push_back('B');
        }
        else
        {
            s2.push_back('B');
            s1.push_back('R');
        }
    }

    if (imperfectness(s1) < imperfectness(s2))
        cout << s1 << '\n';
    else
        cout << s2 << '\n';
}

int main()
{

    fastIO;

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
    }

    return 0;
}