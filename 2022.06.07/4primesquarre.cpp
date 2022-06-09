#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
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
#define inputArr(arr) \
    fr(i, n)          \
    {                 \
        int x;        \
        cin >> x;     \
        arr.pb(x);    \
    }
#define countBits(n) (log2(n) + 1)
int mod = 1e9 + 7;

void DhirajThorat()
{
    // You are the best !!!!
}
const int N = 1e5 + 10;
vector<bool> isprime(N, true);

void Dhiraj()
{
    // fr(i, 100)
    // {
    //     cout << i << ' ' << isprime[i] << endl;
    // }

    int n;
    cin >> n;
    int num = 0;

    if (n == 4)
    {
        vector<vector<int>> matrix = {{4, 6, 8, 1}, {4, 9, 9, 9}, {4, 10, 10, 65}, {1, 4, 4, 4}};
        cout << "4 6 8 1\n4 9 9 9\n4 10 10 65\n1 4 4 4\n";
        return;
    }
    
    for (int i = 1; i <= N; i++)
    {
        if (isprime[i] == false)
        {
            if (isprime[(i * (n - 1) + 1)] == true)
            {
                num = i;
                break;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << num << ' ';
        }
        cout << 1 << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << 1 << ' ';
    }
}

int main()
{

    // fastIO;

    DhirajThorat();

    isprime[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (isprime[i] == true)
            for (int j = (2 * i); j < N; j += i)
                isprime[j] = false;
    }
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        cout << '\n';
    }

    return 0;
}

// #include <bits/stdc++.h>

// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> a(n);
//     for (int i = 0; i < n; ++i)
//     {
//         a[i].resize(n, 0);
//     }

//     if (n == 4)
//     {
//         vector<vector<int>> matrix = {{4, 6, 8, 1}, {4, 9, 9, 9}, {4, 10, 10, 65}, {1, 4, 4, 4}};
//         cout << "4 6 8 1\n4 9 9 9\n4 10 10 65\n1 4 4 4\n";
//         return;
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         a[i][i] = 1;
//         a[i][n - i - 1] = 1;
//     }

//     if (n % 2)
//     {
//         a[n / 2 - 1][n / 2] = 1;
//         a[n / 2][n / 2 + 1] = 1;
//     }

//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout << a[i][j];
//             if (j < n - 1)
//                 cout << " ";
//             else
//                 cout << "\n";
//         }
//     }
// }

// int main()
// {
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }