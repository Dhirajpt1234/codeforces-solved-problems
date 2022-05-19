#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
vector<ll> dp(4001,0);

int main(){
	
	ll t;
	cin>>t;
	while(t--){
		
		ll l,r,a;
		cin>>l>>r>>a;
		
		ll a2 = r/a;
		ll a1 = a2*a - 1;
		ll ans1 = 0;
		if(a1>=l){
			ans1 += a1/a + a1%a;
		}
		ll ans2 = r/a + r%a;
		cout<<max(ans1,ans2)<<endl;
	}

	return 0;
    
}