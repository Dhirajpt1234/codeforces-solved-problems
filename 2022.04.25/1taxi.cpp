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

void Dhiraj()
{
    int n;
    cin >> n;

    vi arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    vi hash(4, 0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i] - 1]++;
    }

    int cnt = 0;
    cnt = cnt + arr[3];
    if (hash[2] >= hash[0])
    {
        cnt = cnt + hash[0];
        hash[0] -= hash[0];
        hash[2] -= hash[0];

        cnt = cnt + hash[2];

        if (hash[1] % 4 == 0)
            cnt = cnt + hash[1] / 4;
        else
            cnt = cnt + hash[1] / 4 + 1;
    }
    else
    {
        cnt = cnt + hash[2];
        hash[2] -= hash[2];
        hash[0] -= hash[2];

        if (hash[1] % 2 == 0)
        {
            cnt += hash[1] / 2;
            if (hash[0] % 4 == 0)
            {
                cnt += hash[0] / 4;
            }
            else
            {
                cnt += (hash[0] / 4);
                cnt++;
            }
        }
        else
        {
            cnt += hash[1] / 2;
            hash[1] = hash[1] % 2;

            if (hash[0] <= 2)
            {
                cnt++;
            }
            else
            {
                cnt++;
                hash[0] -= 2;
                if (hash[0] % 4 == 0)
                {
                    cnt += hash[0] / 4;
                }
                else
                {
                    cnt += hash[0] / 4;
                    cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";
}

int main()
{

    fastIO;

    Dhiraj();

    return 0;
}