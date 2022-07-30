// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define int long long
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<long long, long long> pll;
// typedef pair<string, string> pss;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<long long> vl;
// typedef vector<vl> vvl;

// #define fastIO                    \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define maxOfVec(a) *max_element(a.begin(), a.end())
// #define minOfVec(a) *min_element(a.begin(), a.end())
// #define mp make_pair
// #define pb push_back
// #define fr(i, n) for (int i = 0; i < n; i++)
// #define lcm(a, b) (a * b) / (__gcd(a, b))
// #define countBits(n) (log2(n) + 1)
// int mod = 1e9 + 7;
// // ASCII of 'a'-97,'z'-123,'A'-65,'Z'-90,'0'-48,'9'-57

// void DhirajThorat()
// {
//     // You are the best !!!!
// }

// void Dhiraj()
// {
//     string s;
//     cin >> s;

//     string temp = "hello";

//     int l = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == temp[l])
//             l++;
//     }

//     if (l > 4)
//         cout << "YES";
//     else
//         cout << "NO";
// }

// int32_t main()
// {

//     fastIO;
//     DhirajThorat();
//     int O_O = 1;
//     // cin >> O_O;
//     while (O_O--)
//     {
//         Dhiraj();
//         cout << '\n';
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int, greater<int>> s;
    for (int i = 0; i <= n - 1; i++)
    {
        s.insert(arr[i]);
    }
    int i = 1;
    for (auto &x : s)
    {
        i++;
        if (k == i)
        {
            cout << x;
            break; 
        }
        else
        {
        }
    }

    return 0;
}