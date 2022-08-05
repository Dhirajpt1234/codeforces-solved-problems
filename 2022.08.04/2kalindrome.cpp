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
#define mkp make_pair
#define push push_back
#define pop pop_back
#define fr(i, n) for (int i = 0; i < n; i++)
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n;
    cin >> n;

    int arr[n];
    fr(i, n)
    {
        cin >> arr[i];
    }

    int d1 = 0, d2 = 0;

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            d1 = arr[i];
            d2 = arr[n - 1 - i];
            break;
        }
    }

    vector<int> arr1, arr2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != d1)
            arr1.push_back(arr[i]);
        if (arr[i] != d2)
            arr2.push_back(arr[i]);
    }

    int f1 = 1, f2 = 1;
    for (int i = 0; i < arr1.size() / 2; i++)
    {
        if (arr1[i] != arr1[arr1.size() - 1 - i])
        {
            f1 = 0;
            break;
        }
    }
    for (int i = 0; i < arr2.size() / 2; i++)
    {
        if (arr2[i] != arr2[arr2.size() - 1 - i])
        {
            f2 = 0;
            break;
        }
    }

    if (f1 || f2)
        cout << "YES";
    else
        cout << "NO";
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