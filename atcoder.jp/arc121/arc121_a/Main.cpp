#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
  int n,X,Y;
  vector<pair<int,int>> x,y;
  vector<int> x1,y1;
  cin>>n;
  rep(i,n){
    cin>>X>>Y;
    x1.push_back(X);
    y1.push_back(Y);
    x.push_back(make_pair(X,i));
    y.push_back(make_pair(Y,i));
  }
  sort(x.begin(),x.end());
  sort(y.begin(),y.end());
  bitset<1000000> c;
  vector<int> xf,yf;
  xf.push_back(x1.at(x.at(0).second));
  yf.push_back(y1.at(x.at(0).second));
  
  xf.push_back(x1.at(x.at(1).second));
  yf.push_back(y1.at(x.at(1).second));
  
  xf.push_back(x1.at(x.at(n-1).second));
  yf.push_back(y1.at(x.at(n-1).second));
  
  xf.push_back(x1.at(x.at(n-2).second));
  yf.push_back(y1.at(x.at(n-2).second));
  c.set(x.at(0).second);
  c.set(x.at(1).second);
  c.set(x.at(n-1).second);
  c.set(x.at(n-2).second);
  
  if(!c.test(y.at(0).second)){
    xf.push_back(x1.at(y.at(0).second));
  	yf.push_back(y1.at(y.at(0).second));
  }
  if(!c.test(y.at(1).second)){
    xf.push_back(x1.at(y.at(1).second));
  	yf.push_back(y1.at(y.at(1).second));
  }
  if(!c.test(y.at(n-1).second)){
    xf.push_back(x1.at(y.at(n-1).second));
  	yf.push_back(y1.at(y.at(n-1).second));
  }
  if(!c.test(y.at(n-2).second)){
    xf.push_back(x1.at(y.at(n-2).second));
  	yf.push_back(y1.at(y.at(n-2).second));
  }
  vector<int> dis;
  rep(i,xf.size()){
    for(int j=0;j<i;j++){
      dis.push_back(max(abs(xf.at(i)-xf.at(j)),abs(yf.at(i)-yf.at(j))));
    }
  }
  sort(dis.begin(),dis.end());
  reverse(dis.begin(),dis.end());
  cout<<dis.at(1)<<endl;

}