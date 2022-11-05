#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	
	vector<string> masu;


	int h,w,ans=0;
	int x,y;
	x=0;
	y=0;
	bool flag=false;

	cin>>h>>w;

	rep(i,h){
		string str;
		cin>>str;
		rep(j,w){
			if(str.at(j)==('o')){
				if(flag){
					int ans=0;
					int dx=x-j;
					int dy=y-i;
					ans=abs(dx)+abs(dy);
					cout<<ans<<endl;
					return 0;
				}else{
					flag=true;
					y=i;
					x=j;
				}
					
			}
		}
	}

	return 0;
}


