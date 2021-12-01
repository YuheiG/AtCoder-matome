#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	int n;
	ll w;
	cin>>n>>w;
	vector<pair<ll,ll>> che(n);

	rep(i,n){
		int a,b;
		cin>>a>>b;
		che.at(i)=make_pair(a,b);
	}
	sort(che.begin(),che.end());
	reverse(che.begin(), che.end());

	ll ans=0;

	rep(i,n){
		if(che.at(i).second<=w){
			ans+=che.at(i).first*che.at(i).second;
			w-=che.at(i).second;
		}else{
			ans+=che.at(i).first*w;
			break;
		}
	}

	cout<<ans<<endl;


	return 0;
}
	





