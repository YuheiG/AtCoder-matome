#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  string s,ans;
  cin>>s;
  ans=s;
  int s_size=s.size();
  for(int i=0;i<s_size;i++){
    if(s.at(i)=='0'||s.at(i)=='1'||s.at(i)=='8'){
      ans.at(s_size-1-i)=s.at(i);
    }else if(s.at(i)=='6'){
      ans.at(s_size-1-i)='9';  
    }else{
      ans.at(s_size-1-i)='6';  
    }
  }
  cout<<ans<<endl;
}