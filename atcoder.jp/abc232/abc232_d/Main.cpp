#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int h,w;
int deep,deepmax;
vector<vector<bool>> seen,G;


bool rangeman(int hv,int wv){
	if(hv==h){return false;	}
	if(wv==w){return false;}
	return true;

}

void dfs(int hv,int wv){

    seen.at(hv).at(wv)=true; 
    deep++;
    deepmax=max(deep,deepmax);
 
    if(rangeman(hv+1,wv))if((!seen.at(hv+1).at(wv))&&G.at(hv+1).at(wv))dfs(hv+1,wv);
    if(rangeman(hv,wv+1))if((!seen.at(hv).at(wv+1))&&G.at(hv).at(wv+1))dfs(hv,wv+1);

    deep--;
    return;
    
}

int main(){
   
    
    cin>>h>>w;
 

    seen.assign(h,vector<bool>(w,false));
	G.assign(h,vector<bool>(w,false));
  
    rep(i,h){
    	rep(j,w){
    		char c;
    		cin>>c;
    		if(c=='.')G.at(i).at(j)=true;
    	}
    }


    deep=0;
    deepmax=-1;
    dfs(0,0);
    cout<<deepmax<<endl;

    return 0;
}




