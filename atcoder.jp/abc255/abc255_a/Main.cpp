#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
  int masu[5];
  int r,c;
  cin>>r>>c;
  r--;c--;
  rep(i,4){
   cin>>masu[i]; 
  }

  cout<<masu[r*2+c]<<endl;

  }
