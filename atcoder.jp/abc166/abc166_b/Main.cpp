#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main(){
	int n,k;
	int d,a;
	bitset<102> okasi;
	cin>>n>>k;
  rep(i,k){
    cin>>d;
    rep(j,d){
      cin>>a;
      a--;
      okasi.set(a);
    }
  }
//  cout<<okasi<<endl;
  int ans;
  ans=n-okasi.count();
  cout<<ans<<endl;
}