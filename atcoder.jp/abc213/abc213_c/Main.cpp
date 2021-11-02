#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	ll h,w;
	int n;
	cin>>h>>w>>n;
	vector<int> xused,yused;
	map<int,int> x,y;
	vector<int> xp,yp;
	int xc=0,yc=0;
	rep(i,n){
      int X,Y;
		cin>>X>>Y;
		X--;
		Y--;
      xp.push_back(X);
      yp.push_back(Y);
		xused.push_back(X);
		yused.push_back(Y);
	}
	sort(xused.begin(),xused.end());
	sort(yused.begin(),yused.end());
  
	rep(i,n){
		if(x.find(xused.at(i))==x.end()){
			x.insert(make_pair(xused.at(i),xc));
			xc++;
		}
		if(y.find(yused.at(i))==y.end()){
			y.insert(make_pair(yused.at(i),yc));
			yc++;
		}
	}



	rep(i,n)cout<<x.at(xp.at(i))+1<<" "<<y.at(yp.at(i))+1<<endl;
	
	return 0;
}