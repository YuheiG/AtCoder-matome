#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n,k;
	cin>>n>>k;
	vector<pair<int,int>> p(n);
	vector<bool> ans(n,false);
	rep(i,n){
		int a,b,c;
		cin>>a>>b>>c;
		p.at(i)=make_pair(a+b+c,i);
	}

	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());

	k--;
	int border=p.at(k).first-300;

	rep(i,n){
		if(border<=p.at(i).first){
			ans.at(p.at(i).second)=true;
		}
	}
	
	rep(i,n){
		if(ans.at(i)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

	
	return 0;
}
	





