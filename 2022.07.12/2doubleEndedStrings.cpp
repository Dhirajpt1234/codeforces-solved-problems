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

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return true;
    }

    return false;
}
void Dhiraj()
{
    string c, d;
    cin >> c >> d;

    int n = c.length(), m = d.length();
    vector<pair<int, string>> arr;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = i; j < n; j++)
        {
            k++;
            // cout << "substr is : " << i << ' ' << j << ' ' << c.substr(i, k) << endl;
            if (isSubstring(c.substr(i, k), d))
            {
                string temp = c.substr(i, k);
                arr.push_back(make_pair(temp.length(), temp));
            }
        }
    }

    sort(arr.begin(), arr.end());
    // fr(i, arr.size()) cout << arr[i].second << ' ';
    cout << endl;
    if (arr.size() > 0)
        cout << n + m - 2 * arr[arr.size() - 1].first;
    else
        cout << n + m;
}

int main()
{
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