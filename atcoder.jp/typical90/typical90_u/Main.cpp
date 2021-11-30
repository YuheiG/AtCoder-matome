#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

stack<int> lab;
vector<bool> seen;
ll cc;

void dfs(const Graph &g, int v) {
    seen.at(v)=true; 
    
    for (auto nv : g.at(v)) { 
        if (seen.at(nv)) continue; 
        dfs(g,nv); 
    }

    lab.push(v);

}

void dfst(const Graph &gt, int v) {
    seen.at(v)=true; 
    cc++;
    
    for (auto nv : gt.at(v)) { 
        if (seen.at(nv)) continue; 
        dfst(gt,nv); 
    }
}

int main(){

	int n,m;
	cin>>n>>m;
	Graph g(n),gt(n);

	seen.assign(n,false);

	rep(i,m){
		int a,b;
		cin>>a>>b;
		a--;b--;
		g.at(a).push_back(b);
		gt.at(b).push_back(a);

	}

	rep(i,n)if(!seen.at(i))dfs(g,i);

	seen.assign(n,false);	
	ll ans=0;
	while(!lab.empty()){
		int v=lab.top();
		lab.pop();
		if(!seen.at(v)){
			cc=0;
			dfst(gt,v);
			ans+=cc*(cc-1)/2;
		}

	}

	cout<<ans<<endl;

	return 0;
}
	





