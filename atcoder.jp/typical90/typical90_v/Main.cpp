#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

ll koujo(ll a,ll b){
	if(a>b)swap(a,b);
	ll r;
	r=b%a;
	while(r!=0){
		b=a;
		a=r;
		r=b%a;
	}
	return a;
}

int main(){

	ll a,b,c,ans=0;
	cin>>a>>b>>c;

	ll n=koujo(koujo(a,b),c);

	ans+=a/n;
	ans+=b/n;
	ans+=c/n;
	ans-=3;

	cout<<ans<<endl;


    return 0;
}




