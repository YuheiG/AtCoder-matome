#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	string s;
	cin>>s;
	bool big=false;
	bool small=false;
	set<int> ng;

	rep(i,s.size()){
		if(s.at(i)<91){
			big=true;
		}else{
			small=true;
		}
		if(ng.find(s.at(i))==ng.end()){
			ng.insert(s.at(i));
		}else{
			cout<<"No"<<endl;
			return 0;
		}
	}

	if(small&&big){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

}

