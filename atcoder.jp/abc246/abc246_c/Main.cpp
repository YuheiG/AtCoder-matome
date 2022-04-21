#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int n,k,x;
	cin>>n>>k>>x;
	vector<int> a(n);
	rep(i,n){
		int p;
		cin>>p;

		if(k==0){
			a.at(i)=p;
			continue;
		}

		if(p/x<=k){
			k-=p/x;
			p%=x;
		}else{
			p-=x*k;
			k=0;
		}
		a.at(i)=p;
	}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	ll ans=0;
	rep(i,n){
		if(k!=0){
			k--;	
		}else{
			ans+=a.at(i);
		}
	}

	cout<<ans<<endl;


	return 0;
}