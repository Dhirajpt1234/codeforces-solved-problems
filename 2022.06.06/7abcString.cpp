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

bool isPerfect(string s)
{
    // cout << "  loop  ";
    stack<char> st;
    char c;
    for (int i = 0; i < s.length(); i++)
    {
        c = s[i];
        if (st.empty())
            st.push(c);
        else if (c == ')' && st.top() == '(')
            st.pop();
        else
            st.push(c);
    }

    if (st.empty())
        return true;
    return false;
}

void Dhiraj()
{
    string s;
    cin >> s;

    string base = "ABCAB";
    string s1 = "", s2 = "", s3 = "", s4 = "";
    int pos = 0;
    for (int i = 0; i < 3; i++)
    {
        if (s[0] == base[i])
        {
            pos = i;
            break;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == base[pos])
        {
            s1.push_back('(');
            s2.push_back('(');
            s3.push_back('(');
            s4.push_back('(');
        }
        else if (s[i] == base[pos + 1])
        {
            s1.push_back('(');
            s2.push_back('(');
            s3.push_back(')');
            s4.push_back(')');
        }
        else
        {
            s1.push_back('(');
            s2.push_back(')');
            s3.push_back('(');
            s4.push_back(')');
        }
    }

    // cout << s1 << endl;
    // cout << s2 << endl;
    // cout << s3 << endl;
    // cout << s4 << endl;

    if (isPerfect(s1) || isPerfect(s2) || isPerfect(s3) || isPerfect(s4))
        cout << "YES";
    else
        cout << "NO";
}

int main()
{

    // fastIO;

    DhirajThorat();
    int t;
    cin >> t;
    while (t--)
    {
        Dhiraj();
        cout << '\n';
    }

    return 0;
}