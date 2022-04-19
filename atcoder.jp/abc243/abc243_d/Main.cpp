#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
	int n;
	ll x;
	cin>>n>>x;
	string st;
	cin>>st;
	stack<bool> ans;

	bitset<70> bs(x);

	bool stnby=false;
	rep(i,70){
		if(!bs.test(69-i)&&!stnby)continue;
		stnby=true;
		if(bs.test(69-i)){
			ans.push(true);
		}else{
			ans.push(false);
		}
	}

	rep(i,n){
		if(st.at(i)=='U'){
			ans.pop();
		}else if(st.at(i)=='R'){
			ans.push(true);
		}else{
			ans.push(false);
		}
	}

	ll factor=1;
	ll Ans=0;
	while(!ans.empty()){
		Ans+=factor*ans.top();
		factor*=2;
		ans.pop();
	}

	cout<<Ans<<endl;

	
	return 0;		
}