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

void Dhiraj()
{
    int n;
    cin >> n;

    int arr[3] = {0, 0, 0};
    fr(i, n)
    {
        int x;
        cin >> x;

        arr[x % 3]++;
    }

    int cnt = 0;
    int l = n / 3;
    fr(i, 3)
    {
        if (arr[0] > l)
        {
            int g = arr[0] - l;
            arr[1] += g;
            cnt += g;
            arr[0] = l;
        }
        if (arr[1] > l)
        {
            int g = arr[1] - l;
            arr[2] += g;
            cnt += g;
            arr[1] = l;
        }
        if (arr[2] > l)
        {
            int g = arr[2] - l;
            arr[0] += g;
            cnt += g;
            arr[2] = l;
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