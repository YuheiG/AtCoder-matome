#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int s,t,x;
	cin>>s>>t>>x;
	bool day=false;
	if(t<s){
		if(x<t||x>=s)day=true;
	}else{
		if(x>=s&&x<t)day=true;
	}

	if(day){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	
	return 0;
}
	





