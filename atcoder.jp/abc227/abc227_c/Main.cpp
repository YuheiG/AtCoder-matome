#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	ll n,ans=0;
	cin>>n;

	for(ll i=1;i*i*i<=n;i++){
		for(ll j=i;j*j*i<=n;j++){
			ans+=n/(i*j)-j+1;
		}
	
	}	

	cout<<ans<<endl;

	return 0;
	
}




