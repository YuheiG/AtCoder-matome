#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int h,w;

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

	int n,m;
	cin>>n>>m;
	vector<int> p(n);
	rep(i,n){
		cin>>p.at(i);
		p.at(i)--;
	}
	UnionFind tree(n);

	rep(i,m){
		int x,y;
		cin>>x>>y;
		x--;y--;
		tree.unite(x,y);
	}

	int ans=0;
	rep(i,n){
		if(tree.same(i,p.at(i)))ans++;
	}

	cout<<ans<<endl;

	


	return 0;
}
	





