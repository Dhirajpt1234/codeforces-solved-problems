// #include <vector>
// #include <algorithm>
// #include <iostream>
// #include <cassert>
// #include <map>
// #include <set>
// #include <cmath>
// #include <array>
// using namespace std;

// signed main() {
//     if (1) {
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);
//         cout.tie(0);
//     }
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         map <int, int> d;
//         for (int i = 0; i < n; ++i) {
//             int x;
//             cin >> x;
//             d[x]++;
//         }
//         int cnt = 0;
//         for (auto i : d) {
//             ++cnt;
//         }
//         int cur_cnt = cnt;
//         for (int k = 1; k <= n; ++k) {
//             cout << max(k, cnt) << " ";
//         }
//         cout<<"\n";
//     }
// }

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
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m[x]++;
    }
    int cnt = 0;
    for (auto &it : m)
        cnt++;

    for (int i = 1; i <= n; i++)
    {
        cout << max(cnt, i) << ' ';
    }
    cout << '\n';
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