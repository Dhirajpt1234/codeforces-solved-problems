#include <bits/stdc++.h>
using namespace std;

// #define ll long long
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<pii> vpii;

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
#define frr(i, n) for (int i = n - 1; i >= 0; i--)
#define frs(i, k, n) for (int i = k; i < n; i++)
#define frsr(i, k, n) for (int i = n - 1; i >= k; i--)
#define endl "\n"
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define countBits(n) (log2(n) + 1)

const int mod = 1e9 + 7;
const string alpha = "abcdefghijklmnopqrstuvwxyz";

// ToLow --> s[i] | ' '
// ToUp  --> s[i] & '_'
// ASCII of 'a'- 97,'z'- 123,'A'- 65,'Z'- 90,'0'- 48,'9'- 57

void DhirajThorat()
{
    // Consistency Matters !!!!
}

void Dhiraj()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    // mex for the string of the length 1
    int count[26] = {0};
    fr(i, n)
    {
        count[s[i] - 'a'] = 1;
    }
    // fr(i, 26) { cout << count[i] << ' '; }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            cout << char('a' + i);
            return;
        }
    }

    // mex for the string of the length 2;
    set<string> st;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = "";
        temp.push_back(s[i]);
        temp.push_back(s[i + 1]);
        st.insert(temp);
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            string temp = "";
            temp.push_back(char('a' + i));
            temp.push_back(char('a' + j));

            if (st.find(temp) == st.end())
            {
                cout << temp;
                return;
            }
        }
    }

    // mex for the string of the length 3;
    st.clear();
    for (int i = 0; i < n - 2; i++)
    {
        string temp = "";
        temp.push_back(s[i]);
        temp.push_back(s[i + 1]);
        temp.push_back(s[i + 2]);
        st.insert(temp);
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            string temp = "a";
            temp.push_back(char('a' + i));
            temp.push_back(char('a' + j));

            if (st.find(temp) == st.end())
            {
                cout << temp;
                return;
            }
        }
    }
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