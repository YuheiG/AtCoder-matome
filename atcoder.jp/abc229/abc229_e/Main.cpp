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
	vector<vector<pair<int,int>>> lis(n);

	rep(i,m){
		int a,b;
		cin>>a>>b;
		a--;b--;
		if(a>b)swap(a,b);
		lis.at(a).push_back(make_pair(a,b));
	}

	UnionFind tree(n);
	vector<int> fans(n);
	fans.at(n-1)=0;
	int ans=0;
	for(int i=n-1;i>0;i--){
		ans++;
		rep(j,lis.at(i).size()){
			int a,b;
			a=lis.at(i).at(j).first;
			b=lis.at(i).at(j).second;

			if(!tree.same(a,b)){
				tree.unite(a,b);
				ans--;
			}
		}
		fans.at(i-1)=ans;
	}

	rep(i,n)cout<<fans.at(i)<<endl;
	
	return 0;
}
	





