#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


vector<bool> seen;
int deep,deepmax=-1,maxid;
void dfs(const Graph &G, int v) {
    seen.at(v)=true; 
    deep++;
    if(deep>deepmax){
    	maxid=v;
    	deepmax=deep;
    }

    for (auto nv : G.at(v)) { 
        if (seen.at(nv)) continue; 
        dfs(G,nv); 
    }
    deep--;
}


int main(){
   
    int n;
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
    dfs(G,0);
    int s=maxid;
    deepmax=-1;
    seen.assign(n,false);
    
    dfs(G,s);
    deepmax++;
    cout<<deepmax<<endl;

    return 0;
}