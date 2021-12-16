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
   
    int n,m;
    cin>>n>>m;
    
    Graph G(n);
    rep(i,m){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        G.at(a).push_back(b);
        G.at(b).push_back(a);
    }

    queue<int> que;

    rep(i,n){
    	if(G.at(i).size()>2){
    		cout<<"No"<<endl;
    		return 0;
    	}else if(G.at(i).size()<=1){
    		que.push(i);
    	}
    }

    seen.assign(n,false); 

    while(!que.empty()){
    	int v=que.front();
    	que.pop();

    	dfs(G,v);

    }

    rep(i,n){
    	if(!seen.at(i)){
    		cout<<"No"<<endl;
    		return 0;
    	}
    }


    cout<<"Yes"<<endl;
    



    return 0;
}




