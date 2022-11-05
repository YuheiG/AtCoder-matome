#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b||b==c){
		cout<<"Yes"<<endl;
		return 0;
	}

	if(max(max(a,b),c)!=b&&min(min(a,b),c)!=b){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

	return 0;
}


