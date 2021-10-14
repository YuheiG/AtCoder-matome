#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int n;
vector<int> t,l,r;
bool check(int i,int j){
  rep(m,2){  
  	if(r.at(i)<l.at(j)||r.at(j)<l.at(i)){
    	return false;
  	}
  	if(r.at(i)==l.at(j)){
      if(t.at(i)==2||t.at(i)==4||t.at(j)==3||t.at(j)==4){
        return false;
      }
    }
    swap(i,j);
  }
  return true;

}

int main() {
  cin>>n;
  rep(i,n){
    int T,L,R;
    cin>>T>>L>>R;
    t.push_back(T);
    l.push_back(L);
    r.push_back(R);
  }
  
  int ans=0;
  rep(i,n){
    for(int j=i+1;j<n;j++){
     // cout<<i<<" "<<j<<endl;
      if(check(i,j)){
        ans++;
      }
    }
  }
  
  cout<<ans<<endl;
  
  return 0;
}
