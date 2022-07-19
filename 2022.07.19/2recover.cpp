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

    int arr[n];
    int mx = INT_MIN;
    fr(i, n)
    {
        cin >> arr[i];
        mx = max(arr[i], mx);
    }
    int pre[n], post[n];
    int l = n - 1, r = 0;
    char last = ' ';
    if (n == 1)
        cout << arr[0] << ' ';
    else if (arr[0] == mx || arr[n - 1] == mx)
    {
        int i = 0, j = n - 1;
        if (arr[i] > arr[j])
        {
            pre[l] = arr[i];
            i++;
            l--;
            last = 'i';
        }
        else
        {
            post[r] = arr[j];
            j--;
            r++;
            last = 'j';
        }

        // for (int i = l + 1; i < n; i++)
        // {
        //     cout << pre[i] << '-';
        // }
        // cout << "-----";
        // for (int i = 0; i < r; i++)
        // {
        //     cout << post[i] << '-';
        // }
        // cout << "|||| ";

        while (i < j)
        {
            if (arr[i] < arr[j])
            {
                pre[l] = arr[i];
                i++;
                l--;
                last = 'i';
            }
            else
            {
                post[r] = arr[j];
                j--;
                r++;
                last = 'j';
            }
        }

        // for (int i = l + 1; i < n; i++)
        // {
        //     cout << pre[i] << '-';
        // }
        // cout << "-----";
        // for (int i = 0; i < r; i++)
        // {
        //     cout << post[i] << '-';
        // }

        // cout << "||| ";

        if (last == 'j')
        {
            pre[l] = arr[i];
            i++;
            l--;
            last = 'i';
        }
        else
        {
            post[r] = arr[j];
            j--;
            r++;
            last = 'j';
        }

        // for (int i = l + 1; i < n; i++)
        // {
        //     cout << pre[i] << '-';
        // }
        // cout << "-----";
        // for (int i = 0; i < r; i++)
        // {
        //     cout << post[i] << '-';
        // }

        for (int i = l + 1; i < n; i++)
        {
            cout << pre[i] << ' ';
        }
        for (int i = 0; i < r; i++)
        {
            cout << post[i] << ' ';
        }
    }
    else
        cout << -1;
}

int32_t main()
{

    // fastIO;
    DhirajThorat();
    int O_O = 1;
    cin >> O_O;
    while (O_O--)
    {
        Dhiraj();
        cout << '\n';
    }
}