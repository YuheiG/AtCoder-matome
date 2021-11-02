#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen.at(v) = true; 
    cout<<v+1<<" ";
    rep(i,G.at(v).size()){
      int nv=G.at(v).at(i);
        if (seen.at(nv)) continue; 
        dfs(G, nv); 
      cout<<v+1<<" ";
    }
}

int main() {
   
    int n;
    cin >> n;
    
    Graph G(n);
    rep(i,n-1){
        int a, b;
        cin >> a >> b;
        a--;b--;
  //    cout<<a<<" "<<b<<endl;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

    rep(i,n)sort(G.at(i).begin(),G.at(i).end());
 // cout<<G.at(1).at(1)<<endl;
    
    seen.assign(n, false); 
    
    dfs(G, 0);
    cout<<endl;
   
    return 0;
}