#include <bits/stdc++.h>
using namespace std;
// #define long long ll
int main()
{
    long long n , k, w;
    cin>>k >>n>>w;

    long long ans = 0;
    for(long long i = 0 ; i< w ; i++ )
    {
        ans += k*i;
    }
    if(ans > n)
    {
        cout<<(ans-n);
    }
    else
    cout<<0<<endl;

    return 0;
}

