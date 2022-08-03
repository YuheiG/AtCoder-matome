#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	
	ll n;
	cin>>n;
	vector<ll> a(n);
	rep(i,n)cin>>a.at(i);

	map<ll,ll> amap;
	rep(i,n){
		if(amap.find(a.at(i))!=amap.end()){
			amap.at(a.at(i))++;
		}else{
			amap.insert(make_pair(a.at(i),1));
		}
	}
	ll ans=n*(n-1)*(n-2)/6;
	for(auto i=amap.begin();i!=amap.end();i++){
		ll count=i->second;
		if(count==2){
			ans-=n-2;
		}else if(count>2){
			ans-=(n-count)*count*(count-1)/2;
			ans-=count*(count-1)*(count-2)/6;
		}
	}

	cout<<ans<<endl;

	return 0;
}


