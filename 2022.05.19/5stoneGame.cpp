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
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }

void DhirajThorat()
{
    // You are the best !!!!
}

void Dhiraj()
{

    int n;
    cin >> n;

    int arr[n];
    int min1 = 0;
    int max1 = 0;

    // delete the min element first and the max w
    int ans1 = 0, ans2 = 0, ans3 = 0, ans4 = 0;
    fr(i, n)
    {
        cin >> arr[i];
        if (arr[min1] > arr[i])
            min1 = i;
        if (arr[max1] < arr[i])
            max1 = i;
    }

    // both from left side
    ans1 = max(min1, max1) + 1;

    // both from right side
    ans2 += (n - min(min1, max1));

    // small from left and large from right;
    ans3 += min1 + 1 + n - max1;

    // small from right and large from left
    ans4 = n - min1 + max1 + 1;

    int ans = min(ans1, min(ans2, min(ans3, ans4)));
    cout << ans << '\n';
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