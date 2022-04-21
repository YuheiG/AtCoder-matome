#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int x[4],y[4];
	int xa,ya;

	rep(i,3)cin>>x[i]>>y[i];

	if(x[0]==x[1]){
		xa=x[2];
	}else{
		if(x[0]==x[2]){
			xa=x[1];
		}else{
			xa=x[0];
		}
	}
	if(y[0]==y[1]){
		ya=y[2];
	}else{
		if(y[0]==y[2]){
			ya=y[1];
		}else{
			ya=y[0];
		}
	}

	cout<<xa<<" "<<ya<<endl;

	return 0;
}