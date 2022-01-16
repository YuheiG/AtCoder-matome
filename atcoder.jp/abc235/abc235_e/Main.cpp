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

	int n,m,q;
	cin>>n>>m>>q;
	UnionFind tree(n);
	vector<vector<int>> hen(m+q);
	vector<bool> ans(q);


	rep(i,m){
		int a,b,c;
		cin>>a>>b>>c;
		a--;b--;
		hen.at(i).push_back(c);
		hen.at(i).push_back(a);
		hen.at(i).push_back(b);
		hen.at(i).push_back(1);
	}
	rep(i,q){
		int a,b,c;
		cin>>a>>b>>c;
		a--;b--;
		hen.at(i+m).push_back(c);
		hen.at(i+m).push_back(a);
		hen.at(i+m).push_back(b);
		hen.at(i+m).push_back(0);
		hen.at(i+m).push_back(i);
	}

	sort(hen.begin(), hen.end());

	rep(i,m+q){
		if(!tree.same(hen.at(i).at(1),hen.at(i).at(2))){
			if(hen.at(i).at(3)==0){
				ans.at(hen.at(i).at(4))=true;
			}else{
				tree.unite(hen.at(i).at(1),hen.at(i).at(2));
			}
		}
	}

	rep(i,q){
		if(ans.at(i)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}


	return 0;
}
	