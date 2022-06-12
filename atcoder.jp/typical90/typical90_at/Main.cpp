#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	
	int n;
	cin>>n;
	vector<ll> a(46,0),b(46,0),c(46,0);

	rep(i,n){
		ll x;
		cin>>x;
		a.at(x%46)++;
	}
	rep(i,n){
		ll x;
		cin>>x;
		b.at(x%46)++;
	}
	rep(i,n){
		ll x;
		cin>>x;
		c.at(x%46)++;
	}

	ll ans=0;
	rep(i,46){
		rep(j,46){
			rep(k,46){
				if((i+j+k)%46==0){
					ans+=a.at(i)*b.at(j)*c.at(k);
				}
			}
		}
	}

	cout<<ans<<endl;

	return 0;
}


