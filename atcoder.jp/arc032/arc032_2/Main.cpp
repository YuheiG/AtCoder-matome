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

	int n,m;
	cin>>n>>m;
	UnionFind tree(n);

	rep(i,m){
		int x,y;
		cin>>x>>y;
		x--;y--;
		tree.unite(x,y);
	}
	//tree.printp(n);
	int cnt=0;
	rep(i,n){
		if(!tree.same(0,i)){
			tree.unite(0,i);
			cnt++;
		}
	}
	cout<<cnt<<endl;


	return 0;
}
	





