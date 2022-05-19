// #include <bits/stdc++.h>
// using namespace std;

// typedef vector<int> vi;
// typedef pair<int, int> pi;
// typedef long long ll;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// typedef pair<string, string> pss;
// typedef vector<int> vi;
// typedef vector<vi> vvi;
// typedef vector<pii> vii;
// typedef vector<ll> vl;
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
// #define inputArr(arr) \
//     fr(i, n)          \
//     {                 \
//         int x;        \
//         cin >> x;     \
//         arr.pb(x);    \
//     }

// void DhirajThorat()
// {
//     // You are the best !!!!
// }

// void check(string s, int &last, int &seclast, char main)
// {
//     last = 0;
//     seclast - 0;
//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] != main && seclast != 0)
//             return;
//         else if (s[i] != main && seclast == 0)
//             last++;
//         else
//         {
//             seclast++;
//         }
//     }
// }

// void Dhiraj()
// {
//     string s;
//     cin >> s;
//     int a, b, c;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'A')
//             a++;
//         else if (s[i] == 'B')
//             b++;
//         else
//             c++;
//     }

//     // int last = 0;
//     // for (int i = s.length() - 1; i >= 0; i--)
//     // {
//     // }
//     // if ((a == (b + c) || b == (a + c) || c == (a + b)) && s[0] != s[s.length() - 1])
//     //     cout << "YES\n";
//     // else
//     //     cout << "NO\n";

//     int last = 0;
//     int seclast = 0;

//     if ((a == (b + c)))
//     {

//         if (s[0] == s[s.length() - 1])
//             cout << "NO\n";
//         else
//         {
//             check(s, last, seclast, s[0]);
//             if (seclast > last)
//                 cout << "NO\n";
//             else
//                 cout << "YES\n";
//         }
//     }
//     else if (b == (a + c))
//     {
//         if (s[0] == s[s.length() - 1])
//             cout << "NO\n";
//         else
//         {
//             check(s, last, seclast, s[0]);
//             if (seclast > last)
//                 cout << "NO\n";
//             else
//                 cout << "YES\n";
//         }
//     }
//     else if (c == (a + c))
//     {
//         if (s[0] == s[s.length() - 1])
//             cout << "NO\n";
//         else
//         {
//             check(s, last, seclast, s[0]);
//             if (seclast > last)
//                 cout << "NO\n";
//             else
//                 cout << "YES\n";
//         }
//     }
//     else
//         cout << "NO\n";
// }

// int main()
// {

//     // fastIO;

//     DhirajThorat();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         Dhiraj();
//     }

//     return 0;
// }





 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define all(x) (x).begin(), (x).end()
typedef vector<ll> v64;
typedef vector<int> v32;
#define fast_DHIraj()                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
void dhiraj();
ll binaryExpoRRec(ll a, ll b)
{
    if (b == 0)
        return 1 * 1ll;
    ll res = binaryExpoRRec(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    return res * res;
}
vector<int> prime(10000000, 1);
void isPrime()
{
    int c = 0;
    for (int p = 2; p * p <= 10000000; p++)
        if (prime[p] == 1)
            for (int i = p * 2; i <= 10000000; i += p)
            {
                prime[i] = 0;
            }
}
int main()
{
    fast_DHIraj();
    // #ifndef ONLINE_JUDGE
    // freopen('input.txt', 'r', stdin);
    // freopen('error.txt', 'w', stderr);
    // freopen('output.txt', 'w', stdout);
    // #endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        dhiraj();
        cout << '\n';
    }
    return 0;
}
// bool is_perfect(string s)
// {
//     stack<char> stk;
//     forn(i, s.length())
//     {
//         if (stk.empty())
//         {
//             stk.push(s[i]);
//         }
//         else if (stk.top() == '(' && s[i] == ')')
//         {
//             stk.pop();
//         }
//         else
//         {
//             stk.push(s[i]);
//         }
//     }
//     if (stk.empty())
//     {
//         return true;
//     }
//     return false;
// }
bool is_perfect(string expr)
{
	stack<char> temp;
		for(int i=0;i<expr.length();i++)
		{    
			if(temp.empty())
			{
				temp.push(expr[i]);
			}
			else if((temp.top()=='('&& expr[i]==')'))
			{
				temp.pop();
			}
			else
			{
				temp.push(expr[i]);
			}
            // cout<<temp.top();
		}
        // cout<<temp.size()<<endl;
		if(temp.size()-1)
		{
			return false;
		}
		return true;
}
 
void dhiraj()
{
    string s;
    cin >> s;
    if (s[0] == s[s.size() - 1])
    {
        cout << "NO";
        return;
    }
    char fe = s[0];
    char v[] = {'A', 'B', 'C', 'A', 'B'};
    int x = 0;
    forn(i, 5)
    {
        if (s[0] == v[i])
        {
            x = i;
            break;
        }
    }
    string s1 = " ", s2 = " ", s3 = " ", s4 = " ";
    forn(i, s.size())
    {
        if (s[i] == v[x])
        {
            s1 += '(';
            s2 += '(';
            s3 += '(';
            s4 += '(';
        }
        else if (s[i] == v[x + 1])
        {
            s1 += '(';
            s2 += '(';
            s3 += ')';
            s4 += ')';
        }
        else if (s[i] == v[x + 2])
        {
            s1 += '(';
            s2 += ')';
            s3 += ')';
            s4 += '(';
        }
    }
    // cout << s3 << " " << endl;
    // cout << s1 << " " << s2 << " " << s3 << " " << s4 << endl;
    // cout<<is_perfect(s3)<< is_perfect(s1) <<is_perfect(s2) <<is_perfect(s4);
    if (
        is_perfect(s1) ||
        is_perfect(s2) ||
        is_perfect(s3) ||
        is_perfect(s4) 
        )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    // cout<<s3[s3.size()-1]<<" kk ";
}