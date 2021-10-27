#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int n,k;
ll ans=0;
set<set<int>> allused;
vector<vector<int>> grid(10,vector<int>(10));

bool RangeC(int x,int y){
  if(x>=0&&x<n)if(0<=y&&y<n)return true;
  return false;
}

bool used(void){
  set<int> s_used;
  rep(i,n)rep(j,n)if(grid.at(i).at(j)==1)s_used.insert(i*n+j);

  if(allused.find(s_used)!=allused.end()){
    return true;
  }else{
    allused.insert(s_used);
    return false;
  }
  
}

void dfs(int count){ 
  
  if(used())return;
  
  if(count==0){
    ans++;
    return;
  }
  
  vector<pair<int,int>> nv;
  rep(i,n){
    rep(j,n){
      if(grid.at(i).at(j)!=0)continue;
      if(count!=k){
        if(RangeC(i-1,j))if(grid.at(i-1).at(j)==1){
          nv.push_back(make_pair(i,j));
          continue;
        }
        if(RangeC(i,j-1))if(grid.at(i).at(j-1)==1){
          nv.push_back(make_pair(i,j));
          continue;
        } 
        if(RangeC(i+1,j))if(grid.at(i+1).at(j)==1){
          nv.push_back(make_pair(i,j));
          continue;
        }
        if(RangeC(i,j+1))if(grid.at(i).at(j+1)==1){
          nv.push_back(make_pair(i,j));
          continue;
        } 
        
      }else{
        nv.push_back(make_pair(i,j));
      }
    }
  }
  
  rep(i,nv.size()){
    grid.at(nv.at(i).first).at(nv.at(i).second)=1;
    dfs(count-1);
    grid.at(nv.at(i).first).at(nv.at(i).second)=0; 
  }
  return ;
}

int main(){
 
  cin>>n>>k;
  rep(i,n){
    string s;
    cin>>s;
    rep(j,n){
      if(s.at(j)=='#'){
        grid.at(i).at(j)=-1;
      }else{
        grid.at(i).at(j)=0;//Black=-1,white=0,red=1
      }
    }
  }

  dfs(k);
  
  cout<<ans<<endl;

  return 0;
  
}