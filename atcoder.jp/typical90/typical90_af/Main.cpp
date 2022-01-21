#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

vector<bool> seen;
set<pair<int,int>> banlist;
int deep,mintime=INT_MAX,time1,n;
void dfs(const Graph &G,const Graph &A,int v) {
    seen.at(v)=true; 
    deep++;
    time1+=A.at(v).at(deep);
    if(deep+1==n)mintime=min(mintime,time1);
    for (auto nv : G.at(v)) { 
        if (seen.at(nv)) continue; 
        if(banlist.find(make_pair(v,nv))!=banlist.end())continue;
        dfs(G,A,nv); 

    }
    time1-=A.at(v).at(deep);
    deep--;
    seen.at(v)=false;
}

int main(){
   
    int m;
    cin>>n;
   
    Graph G(n),A(n);
       
    rep(i,n){
       rep(j,n){
       	int a;
       	cin>>a;
       	A.at(i).push_back(a);
       	if(i==j)continue;
       	G.at(i).push_back(j);
       }
    }
    cin>>m;
    rep(i,m){
    	int x,y;
    	cin>>x>>y;
    	x--;y--;
    	banlist.insert(make_pair(x,y));
    	banlist.insert(make_pair(y,x));    	
    }

    deep=-1;
    time1=0;
    seen.assign(n,false); 
    rep(i,n){
    	dfs(G,A,i);
    }

    if(mintime==INT_MAX){
    	cout<<-1<<endl;
    }else{
    	cout<<mintime<<endl;
    }

    return 0;
}