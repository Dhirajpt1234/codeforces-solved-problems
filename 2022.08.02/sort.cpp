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
    int A[50];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    vector<pair<pair<int, int>, int>> ans;
    for (int i = 0; i < N; i++)
    {
        int mid = i;
        for (int j = i + 1; j < N; j++)
            if (A[j] < A[mid])
                mid = j;
        if (mid > i)
        {
            ans.push_back(make_pair(make_pair(i, mid), mid - i));
            for (int j = mid; j > i; j--)
                swap(A[j - 1], A[j]);
        }
    }
    cout << ans.size() << "\n";
    for (pair<pair<int, int>, int> p : ans)
        cout << p.first.first + 1 << " " << p.first.second + 1 << " " << p.second << "\n";
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
        // cout << '\n';
    }
}