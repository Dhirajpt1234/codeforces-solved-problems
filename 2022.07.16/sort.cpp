// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<long long, long long> pint;
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
//     int n;
//     cin >> n;
//     int arr[n];
//     vector<pair<int, int>> vec;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] < i + 1)
//         {
//             vec.push_back(make_pair(arr[i], i + 1));
//         }
//     }
//     sort(vec.begin(), vec.end());
//     vector<int> v;
//     for (int i = 0; i < vec.size(); i++)
//     {
//         v.push_back(vec[i].second);
//     }
//     sort(v.begin(), v.end());
//     int c = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         c += (lower_bound(v.begin(), v.end(), vec[i].first) - v.begin());
//     }
//     cout << c << "\n";
// }

// int32_t main()
// {

//     fastIO;
//     DhirajThorat();
//     int O_O = 1;
//     cin >> O_O;
//     while (O_O--)
//     {
//         Dhiraj();
//         cout << '\n';
//     }
// }

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, x;
    x = 0;
    cin >> t;
    while (t--)
    {
        int mx;
        mx = 0;
        cin >> n;
        int arr[100];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
            mx = max(mx, arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (mp[arr[i] == 1])
            {
                x++;
            }
            else
            {
            }
        }
        if (n > 2)
        {
            if (x > 1)
            {
                if (x % 2 == 0)
                {
                    cout << x / 2 << endl;
                }
                else
                {
                    cout << (x + 1) / 2 << endl;
                }
            }
            if (x == 1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (mp[arr[i]] == 1)
                    {
                        if (arr[i] == mx)
                        {
                            for (int i = 0; i < n; i++)
                            {
                                if (mp[arr[i]] >= 3)
                                {
                                    cout << 1 << endl;
                                }
                                else
                                {
                                    cout << 2 << endl;
                                }
                            }
                        }
                        else
                        {
                            cout << 1 << endl;
                        }
                    }
                }
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (mp[arr[i]] == 1)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
    }
    return 0;
}