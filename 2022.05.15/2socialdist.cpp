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

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{
    int n, m;
    cin >> n >> m;

    int arr[n];
    fr(i, n) cin >> arr[i];
    long long int count = 0;
    if (n > m)
        cout << "NO\n";
    else
    {

        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++)
        {
            count += (max(arr[i], arr[i + 1]));
            // count++;
        }

        count += max(arr[0], arr[n - 1]);
        count += n;
        if (count > m)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
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