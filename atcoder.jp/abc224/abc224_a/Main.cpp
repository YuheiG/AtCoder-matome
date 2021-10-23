#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;

int main(){  
  string s;
  cin>>s;
  if(s.size()>2){
    if(s.at(s.size()-1)=='t'&&s.at(s.size()-2)=='s'&&
       s.at(s.size()-3)=='i'){
      cout<<"ist"<<endl;
      return 0;
    }
  }
  if(s.at(s.size()-1)=='r'&&s.at(s.size()-2)=='e'){
    cout<<"er"<<endl;
    return 0;
  }
  
  return 0;

}

