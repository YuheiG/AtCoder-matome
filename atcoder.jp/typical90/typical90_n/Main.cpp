#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	vector<ll> a(n),b(n);

	rep(i,n)cin>>a.at(i);
	rep(i,n)cin>>b.at(i);

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	ll ans=0;

	rep(i,n)ans+=abs(a.at(i)-b.at(i));

	cout<<ans<<endl;

	return 0;
}
	





