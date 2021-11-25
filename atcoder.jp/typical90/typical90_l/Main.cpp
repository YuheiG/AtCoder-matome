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

bool range(int r,int c){
	if(c<0||c>=w)return false;
	if(r<0||r>=h)return false;
	return true;
}

int main(){

	int q;
	cin>>h>>w>>q;
	int seki=h*w;
	UnionFind tree(seki);
	vector<vector<bool>> masu(h,vector<bool>(w,false));

	rep(i,q){
		int Q;
		cin>>Q;
		if(Q==1){
			int r,c,a,b;
			cin>>r>>c;
			r--;c--;
			a=r*w+c;
			masu.at(r).at(c)=true;
			for(int i=-1;i<2;i++){
				for(int j=-1;j<2;j++){
					int cch=abs(i)+abs(j);
					if(cch==0||cch==2)continue;
					if(!range(r+i,c+j))continue;
					if(!masu.at(r+i).at(c+j))continue;
					b=(r+i)*w+c+j;
					tree.unite(a,b);
				}
			}
		}else{
			int a,b,rs,cs,rg,cg;
			cin>>rs>>cs>>rg>>cg;
			rs--;cs--;rg--;cg--;
			if(!masu.at(rs).at(cs)||!masu.at(rg).at(cg)){
				cout<<"No"<<endl;
				continue;
			}
			a=rs*w+cs;
			b=rg*w+cg;

			if(tree.same(a,b)){
				cout<<"Yes"<<endl;
			}else{
				cout<<"No"<<endl;
			}

		}
	}

	return 0;
}
	







