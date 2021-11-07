#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int pcount,hcount;
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; 
    pcount++;

    
    for (auto next_v : G[v]) { 
    	hcount++;
        if (seen[next_v]) continue; 
        dfs(G, next_v); 
    }

    return;
}


int main() {
	
	int n,m;
	cin>>n>>m;

	Graph G(n);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

    seen.assign(n, false); 
    int ans=0;
    rep(i,n){
    	if(!seen.at(i)){
    		pcount=0;
    		hcount=0;
    		dfs(G,i);
    		if(2*pcount==hcount){
    			ans++;
    		}else{
    			cout<<0<<endl;
    			return 0;
    		}
    	}
    }
    ll seki=1;
    for(int i=0;i<ans;i++){
    	seki*=2;
    	seki%=998244353;
    }
    cout<<seki<<endl;

    return 0;
}
