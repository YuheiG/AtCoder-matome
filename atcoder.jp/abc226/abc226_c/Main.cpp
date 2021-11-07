#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

vector<int> t;
vector<bool> seen;
ll time(Graph &a,int v,ll now_ans){
	//cout<<"come="<<v<<"ans="<<now_ans<<endl;
	seen.at(v)=true;
	for(auto nv:a.at(v)){
		if(seen.at(nv))continue;
		now_ans=time(a,nv,now_ans);
	}
	now_ans+=t.at(v);
	return now_ans;
}

int main() {
	int n;
	cin>>n;
	Graph a(n);
	vector<int> k(n);
	t.assign(n,0);
	rep(i,n){
		cin>>t.at(i)>>k.at(i);
		rep(j,k.at(i)){
			int A;
			cin>>A;
			A--;
			a.at(i).push_back(A);
		}
		//cout<<a.at(i).size()<<endl;
	}
	ll ans;
	seen.assign(n,false);
	ans=time(a,n-1,0);
	cout<<ans<<endl;

    return 0;
}