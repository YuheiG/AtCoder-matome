#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	string s;
	cin>>n>>s;
	int dx=1,dy=0;
	int x=0,y=0;
	rep(i,n){
		if(s.at(i)=='S'){
			x+=dx;
			y+=dy;
		}else{
			if(dx==1){
				dx=0;
				dy=-1;
			}else if(dy==1){
				dx=1;
				dy=0;
			}else if(dx==-1){
				dx=0;
				dy=1;
			}else if(dy==-1){
				dx=-1;
				dy=0;
			}else{
				cout<<"e"<<endl;
				return 0;
			}

		}
	}	

	cout<<x<<" "<<y<<endl;
	return 0;	
}