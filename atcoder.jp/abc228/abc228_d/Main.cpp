#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

struct UnionFind{
	vector<int> par;

	UnionFind(int N):par(N){
		rep(i,N)par.at(i)=i;
	}

	int root(int x){
		if(par.at(x)==x)return x;
		par.at(x)=root(par.at(x));
		return par.at(x);
	}

	void unite(int x,int y){
		int rx=root(x);
		int ry=root(y);
		//cout<<"unite rx="<<rx<<" ry="<<ry<<endl;
		if(rx==ry) return;
		par.at(rx)=ry;
		return;
	}

	bool same(int x,int y){
		int rx=root(x);
		int ry=root(y);
		if(rx==ry){	
			return true;
		}else{
			return false;
		}
	}

	void printp(int n){
		rep(i,n)cout<<par.at(i)<<" ";
		cout<<endl;
	}

};

int main(){

	ll q;
	ll n=pow(2,20);
	vector<ll> a(n,-1);
	cin>>q;
	UnionFind tree(n);
	
	rep(i,q){
		int t;
		ll x;
		cin>>t>>x;
		if(t==1){
			ll h=x;
			h%=n;
			int hend=tree.root(h);

			if(hend+1==n){
				tree.unite(hend,0);
			}else{
				tree.unite(hend,hend+1);
			}
			
			a.at(hend)=x;
						
		}else{
			cout<<a.at(x%n)<<endl;
		}

	}
	return 0;
}
	





