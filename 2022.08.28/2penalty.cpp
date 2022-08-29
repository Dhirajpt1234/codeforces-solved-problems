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
    string s;
    cin >> s;
    int n = s.length();
    int one1 = 0, two1 = 0;
    int one2 = 0, two2 = 0;
    int rem1 = 5, rem2 = 5;
    int ans1 = n, ans2 = n;

    // defeat 2nd every time.
    fr(i, n)
    {
        if (i & 1)
        {
            if (s[i] == '1')
                two1++;

            rem2--;
        }
        else
        {
            if (s[i] == '1' || s[i] == '?')
                one1++;
            rem1--;
        }

        if (one1 > two1 + (10 - i) / 2)
            ans1 = min(ans1, i + 1);
        else if (two1 > one1 + (9 - i) / 2)
            ans1 = min(ans1, i + 1);
    }
    rem1 = 5;
    rem2 = 5;
    // defeat 1st;
    fr(i, n)
    {
        if (i & 1)
        {
            if (s[i] == '1' || s[i] == '?')
            {
                two2++;
            }
            rem2--;
        }
        else
        {
            if (s[i] == '1')
                one2++;
            rem1--;
        }
        if (one2 > two2 + (10 - i) / 2)
            ans2 = min(ans2, i + 1);
        else if (two2 > one2 + (9 - i) / 2)
            ans2 = min(ans2, i + 1);
    }

    cout << min(ans1, ans2);
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