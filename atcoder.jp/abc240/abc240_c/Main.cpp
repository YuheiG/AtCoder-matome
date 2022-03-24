#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){
	int n,X;
	cin>>n>>X;

	vector<vector<bool>> k(n+1,vector<bool>(X+1));

	rep(i,n){
		int a,b;
		cin>>a>>b;
		rep(j,X){
			if(k.at(i).at(j)||(j==0&&i==0)){
				if(j+a<=X)k.at(i+1).at(j+a)=true;
				if(j+b<=X)k.at(i+1).at(j+b)=true;
			}
		}
	}


	/*rep(i,n+1){
		rep(j,X){
			cout<<k.at(i).at(j);
		}
		cout<<endl;
	}*/
	if(k.at(n).at(X)){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

    return 0;
}