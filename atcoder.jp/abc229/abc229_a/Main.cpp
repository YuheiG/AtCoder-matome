#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	vector<bool> masu(4);

	rep(i,4){
		char c;
		cin>>c;
		if(c=='#')masu.at(i)=true;
	}

	bool ans=true;
	if(!masu.at(0)&&!masu.at(3))ans=false;
	if(!masu.at(2)&&!masu.at(1))ans=false;

	if(ans){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

	return 0;
}
	





