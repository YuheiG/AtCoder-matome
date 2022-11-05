#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

ll sumC(ll x,ll N){
	ll max=N/x;
	ll ans=x*max*(max+1)/2;
	return ans;
}

ll gcm(ll a,ll b){
	if(a%b==0){
		return b;
	}else{
		return gcm(b,a%b);
	}
}


int main() {

	ll N,a,b;
	cin>>N>>a>>b;
	ll ans=sumC(1,N)-sumC(a,N)-sumC(b,N);
	ll lcm=a*b/gcm(a,b);
//	cout<<lcm<<endl;
	ans+=sumC(lcm,N);
	cout<<ans<<endl;


	return 0;
}



