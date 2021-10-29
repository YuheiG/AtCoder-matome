#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<ll,bool>> ab;
	rep(i,n){
		ll a;
		cin>>a;
		ab.push_back(make_pair(a,false));
	}
	rep(i,m){
		ll b;
		cin>>b;
		ab.push_back(make_pair(b,true));
	}
	sort(ab.begin(),ab.end());
	ll samin=LLONG_MAX;

	rep(i,n+m-1){
		if(ab.at(i).second^ab.at(i+1).second){
			samin=min(samin,abs(ab.at(i).first-ab.at(i+1).first));
			if(samin==0)break;
		}

	}
	cout<<samin<<endl;
	return 0;
}

