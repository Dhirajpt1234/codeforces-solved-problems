#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
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

inline string IntToString(ll a)
{
    char x[100];
    sprintf(x, "%lld", a);
    string s = x;
    return s;
}

inline ll StringToInt(string a)
{
    char x[100];
    ll res;
    strcpy(x, a.c_str());
    sscanf(x, "%lld", &res);
    return res;
}

inline int getDigitsum(int n)
{
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10)
        ;
    return sum;
}

inline int digitSumOfString(string s)
{
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - 48;
    }
    return sum;
}

inline unsigned int getFirstSetBitPos(ll n)
{
    return log2(n & -n) + 1;
}

inline void arraycompression(vector<int> &v) // coordinate compression
{
    vector<int> temp;

    for (int i = 0; i < v.size(); i++)
    {
        temp.push_back(v[i]);
    }

    sort(temp.begin(), temp.end());

    unordered_map<int, int> umap;
    for (int i = 0; i < temp.size(); i++)
    {
        umap[temp[i]] = i;
    }

    for (int i = 0; i < v.size(); i++)
    {
        v[i] = umap[v[i]];
    }
}
// fun to find wheather string contains unique characters or not.
inline bool uniqueCharacters(string str)
{
    int checker = 0;

    for (int i = 0; i < str.length(); i++)
    {

        int bitAtIndex = str[i] - 'a';

        if ((checker & (1 << bitAtIndex)) > 0)
        {
            return false;
        }

        checker = checker | (1 << bitAtIndex);
    }

    return true;
}

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n, a, b;
    cin >> n >> a >> b;

    vi v;
    v.push_back(a);
    int j = n;
    for (int i = 1; i <= n; i++)
    {
        if (j != a && j != b)
        {
            v.push_back(j);
        }
        j--;
    }
    v.push_back(b);

    if (v.size() == n && ((*min_element(v.begin(), v.begin() + (n / 2))) == a) && ((*max_element(v.end() - n / 2, v.end())) == b))
    {
        for (int i = 0; i < n; i++)
            cout << v[i] << ' ';
    }
    else
    {
        cout << -1;
        // for (int i = 0; i < n; i++)
        //     cout << v[i] << ' ';
    }
    cout << "\n";
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