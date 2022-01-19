#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	set<string> namelist;

	int n;
	cin>>n;
	queue<int> ans;
	rep(i,n){
		string name;
		cin>>name;
		if(namelist.find(name)==namelist.end()){
			ans.push(i+1);
			namelist.insert(name);
		}
	}

	while(!ans.empty()){
		cout<<ans.front()<<endl;
		ans.pop();
	}


	return 0;
}
	