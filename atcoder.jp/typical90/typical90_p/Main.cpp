#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	ll a,b,c,n;
	cin>>n>>a>>b>>c;

	int ans=100000;
	rep(an,10000){
		rep(bn,10000){
			if(n<an*a+bn*b)continue;
			if((n-an*a-bn*b)%c==0){
				int cn;
				cn=(n-an*a-bn*b)/c;
				//cout<<an<<" "<<bn<<" "<<cn<<endl;
				ans=min(ans,an+bn+cn);
			}
		}
	}

	cout<<ans<<endl;
	return 0;
}
	





