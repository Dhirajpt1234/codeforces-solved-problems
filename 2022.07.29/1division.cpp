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
const int N = 1e7 + 10;

void Dhiraj()
{
    int n;
    cin >> n;

    vi arr(n);
    vector<bool> present(101, false);
    fr(i, n)
    {
        cin >> arr[i];

        // while (arr[i] > 100)
        // {
        //     arr[i] /= 2;
        // }
        // present[arr[i]] = true;
    }

    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        if (temp < n && present[temp] == false)
        {
            present[temp] = true;
        }
        else
        {
            while (temp > n || present[temp] == true)
            {
                temp /= 2;
            }
            if (temp == 0)
            {
                cout << "NO";
                return;
            }
            present[temp] = true;
        }
    }

    cout << "YES";
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