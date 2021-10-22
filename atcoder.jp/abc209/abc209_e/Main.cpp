#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int cti(char c){
  int ans;
  ans=c-65;
  if(ans>25){
    ans-=6;
  }
  //cout<<"cti"<<c<<"  ans="<<ans<<endl; 
  return ans; 
}

int str3(char a,char b,char c){
  int ans;
 // cout<<a<<b<<c<<endl;
  ans=cti(a)*52*52+cti(b)*52+cti(c);
  return ans;
}


int main(){  
  int m,n;
  cin>>m;
  n=pow(52,3);
  Graph gr(n);
  vector<pair<int,int>> stn;
  vector<int> nodec(n);
  rep(i,m){
    string str;
    int a,b;
    cin>>str;
    a=str3(str.at(0),str.at(1),str.at(2));
    b=str3(str.at(str.size()-3),
           str.at(str.size()-2),
           str.at(str.size()-1));
    gr.at(b).push_back(a);
    stn.push_back(make_pair(a,b));
    nodec.at(a)++;
  }  
  
  queue<int> que;
  vector<int> ans(n,-1);//ans win=1 lose=0 draw=-1
  rep(i,n){
    if(nodec.at(i)==0){
      ans.at(i)=0;
      que.push(i);
    }
  }
  while(!que.empty()){
    int v=que.front();
    que.pop();
    for(int nv:gr.at(v)){
      if(ans.at(nv)!=-1)continue;
      nodec.at(nv)--;
      if(ans.at(v)==0){
        ans.at(nv)=1;
        que.push(nv);
      }else if(ans.at(v)==1){
        if(nodec.at(nv)==0){
          ans.at(nv)=0;
          que.push(nv);
        }        
      }
    }
  }
  rep(i,m){
    if(ans.at(stn.at(i).second)==0)cout<<"Takahashi"<<endl;
    if(ans.at(stn.at(i).second)==1)cout<<"Aoki"<<endl;
    if(ans.at(stn.at(i).second)==-1)cout<<"Draw"<<endl;
    
  }
    
  return 0;

}