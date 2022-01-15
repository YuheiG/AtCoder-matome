#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
queue<int> ans;
int n,checkman=-1,maxdeepn,maxdeep=-1,deep; 
void dfs1(const Graph &G, int v) {
    seen.at(v)=true; 
    deep++;
    if(maxdeep<deep){
    	maxdeep=deep;
    	maxdeepn=v;
    }

    
    for (auto nv : G.at(v)) { 
        if (seen.at(nv)) continue; 
        dfs1(G,nv); 
    }
}

void dfs2(const Graph &G, int v) {
    seen.at(v)=true; 
    checkman*=-1;
    //cout<<checkman<<" "<<v<<endl;
    if(ans.size()<n/2){
    	if(checkman==1)ans.push(v);
    }

    
    for (auto nv : G.at(v)) { 
        if (seen.at(nv)) continue; 
        dfs2(G,nv); 
    }

    checkman*=-1;
}



int main(){
   

    cin>>n;
    
    Graph G(n);
    rep(i,n-1){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }
    deep=-1;
    seen.assign(n,false); 
    dfs1(G,0);
    //cout<<maxdeepn<<endl;
    seen.assign(n,false); 
    dfs2(G,maxdeepn);

    if(ans.size()!=(n/2)){
    	checkman=1;
    	while(!ans.empty())ans.pop();
    	seen.assign(n,false); 
    	dfs2(G,maxdeepn);
    }

    while(!ans.empty()){
    	int a=ans.front();
    	ans.pop();
    	a++;
    	cout<<a<<" ";
    }
    cout<<endl;



    return 0;
}



