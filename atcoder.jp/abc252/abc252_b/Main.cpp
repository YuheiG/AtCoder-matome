#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	
	int n,k;
	cin>>n>>k;
	vector<int> a(n),max_list;
	set<int> ban;
	rep(i,n)cin>>a.at(i);
	rep(i,k){
		int b;
		cin>>b;
		b--;
		ban.insert(b);
	}

	int max=-1;
	rep(i,n){
		if(max<a.at(i)){
			max=a.at(i);
			max_list.clear();
			max_list.push_back(i);
		}else if(max==a.at(i)){
			max_list.push_back(i);
		}
	}
	
	rep(i,max_list.size()){
		if(ban.find(max_list.at(i))!=ban.end()){
			cout<<"Yes"<<endl;
			return 0;
		}
	}

	cout<<"No"<<endl;
	return 0;
}


