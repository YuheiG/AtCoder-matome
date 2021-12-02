#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	ll n,k,m,p,r,ans=1;
	p=998244353;
	cin>>n>>k>>m;
	if(m%p==0){
		cout<<"0"<<endl;
		return 0;
	}
	swap(k,n);

	n=n%(p-1);
	while(k>0){
		if((k&1)==1)ans=(ans*n)%(p-1);
		n=(n*n)%(p-1);
		k>>=1;
	}
	r=ans;
	ans=1;
	k=r;
	n=m;
	
	n%=p;
	while(k>0){
		if((k&1)==1)ans=(ans*n)%p;
		n=(n*n)%p;
		k>>=1;
	}
	cout<<ans<<endl;



	return 0;
}
	





