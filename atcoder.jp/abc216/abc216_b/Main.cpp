#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	vector<pair<string,string>> name(n);

	rep(i,n){
		string s,t;
		cin>>s>>t;
		name.at(i)=make_pair(s,t);
	}

	sort(name.begin(), name.end());

	rep(i,n-1){
		//cout<<name.at(i).first<<" "<<name.at(i).second<<endl;
		if(name.at(i)==name.at(i+1)){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;

	return 0;
}
	





