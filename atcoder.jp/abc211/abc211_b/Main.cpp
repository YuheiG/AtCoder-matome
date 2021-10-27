#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  vector<bool> c(5);
  rep(i,4){
    string s;
    cin>>s;
    if(s=="H"){
      if(c.at(0)){
        cout<<"No"<<endl;
        return 0;
      }
      c.at(0)=true;
    }else if(s=="2B"){
       if(c.at(1)){
        cout<<"No"<<endl;
        return 0;
      }
      c.at(1)=true;
    }else if(s=="3B"){
       if(c.at(2)){
        cout<<"No"<<endl;
        return 0;
      }
      c.at(2)=true;
    }else if(s=="HR"){
       if(c.at(3)){
        cout<<"No"<<endl;
        return 0;
      }
      c.at(3)=true;
    }
  }
  cout<<"Yes"<<endl;
}

