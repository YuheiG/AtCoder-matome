#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	ll n;
	cin>>n;
	stack<char> ans;

	while(n!=0){
		if(n%2==0){
			n/=2;
			ans.push('B');
		}else{
			n--;
			ans.push('A');
		}
	}

	while(!ans.empty()){
		cout<<ans.top();
		ans.pop();
	}
	cout<<endl;

	return 0;
}
	





