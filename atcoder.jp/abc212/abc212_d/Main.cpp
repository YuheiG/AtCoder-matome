#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	priority_queue<ll,vector<ll>,greater<ll>> que;
	int q;
	ll sum=0;

	cin>>q;
	rep(i,q){
		int move;
		ll x;
		cin>>move;
		if(move==1){
			cin>>x;
			x-=sum;
			que.push(x);
		}else if(move==2){
			cin>>x;
			sum+=x;
		}else{
			ll ans=que.top()+sum;
			cout<<ans<<endl;
			que.pop();
		}
	}

	return 0;
}