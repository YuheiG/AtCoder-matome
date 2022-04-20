#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	map<char,int> s;
	int ans=0;
	rep(i,3){
		char c;
		cin>>c;
		s.insert(make_pair(c,i));
	}
	rep(i,3){
		char c;
		cin>>c;
		if(i==s.at(c))ans++;
	}

	if(ans==0||ans==3){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	


	
}