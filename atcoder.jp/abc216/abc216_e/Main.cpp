#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

ll sum(ll a,ll b){
	ll ans=0;

	ans=a*(a+1)-b*(b+1);
	ans/=2;

	return ans;
}

int main(){

	ll n;
	ll k;
	cin>>n>>k;
	vector<ll> fun(n);

	for(int i=0;i<n;i++)cin>>fun.at(i);

	sort(fun.begin(), fun.end());
	reverse(fun.begin(), fun.end());

	ll ans=0;
	ll w=1;
	while(true){
		if(w<n){
			while(fun.at(w-1)==fun.at(w)){
				w++;
				if(w==n)break;
			}
		}
		
		//cout<<k<<" "<<w<<" "<<ans<<endl;
		if(w==n){
			ll h=k/n,r=k%n;

			if(h>=fun.at(n-1)){
				ans+=sum(fun.at(n-1),0)*w;
			}else{
				ans+=sum(fun.at(n-1),fun.at(n-1)-h)*w;
				ans+=(fun.at(n-1)-h)*r;
			}
			break;
		}

		ll hight=fun.at(w-1)-fun.at(w);

		if(k>w*hight){
			ans+=sum(fun.at(w-1),fun.at(w))*w;
			k-=hight*w;
		}else{		
			ll h=k/w,r=k%w;
			//cout<<k<<" "<<h<<" "<<r<<endl;

			ans+=sum(fun.at(w-1),fun.at(w-1)-h)*w;
			ans+=(fun.at(w-1)-h)*r;
			break;
		}
		w++;

	}

	cout<<ans<<endl;

	return 0;
}
	





