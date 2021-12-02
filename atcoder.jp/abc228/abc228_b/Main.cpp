#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen.at(v)=true; 
    
    for (auto nv : G.at(v)) { 
        if (seen.at(nv)) continue; 
        dfs(G,nv); 
    }
}

int main(){

	int n,x;
	cin>>n>>x;
	Graph G(n);

	rep(i,n){
		int a;
		cin>>a;
		a--;
		G.at(i).push_back(a);
	}

	seen.assign(n,false);
	x--;
	dfs(G,x);
	int ans=0;
	rep(i,n)if(seen.at(i))ans++;
	
	cout<<ans<<endl;

	
	return 0;
}
	





