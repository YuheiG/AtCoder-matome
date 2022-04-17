#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

string st;

int add(ll t){
	t%=3;
	return (st.at(0)-65+t)%3;
}

int fun(ll t,ll k){  //A0 B1 C2
	//cout<<"t="<<t<<" k="<<k<<endl;

	if(t==0)return st.at(k)-65;
	if(k==0)return add(t);

	if(k%2==0)return (fun(t-1,k/2)+1)%3;
	if(k%2==1)return (fun(t-1,(k-1)/2)+2)%3;

	return 0;

}

int main(){
	
	
	cin>>st;
	int q;
	cin>>q;

	rep(i,q){
		ll t,k;

		cin>>t>>k;
		k--;
		char ans=fun(t,k)+65;
		cout<<ans<<endl;

	}

	return 0;
		
}