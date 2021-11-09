#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

vector<pair<ll,ll>> kari;
vector<ll> ans;

void countabs(ll le,ll ri){

	while(kari.size()!=0){
		if(le<0){
			ans.at(kari.at(0).second)=abs(ri-kari.at(0).first);
		}else{
			ll a,b;
			a=abs(le-kari.at(0).first);
			b=abs(ri-kari.at(0).first);
			if(a>b){
				ans.at(kari.at(0).second)=b;
			}else{
				ans.at(kari.at(0).second)=a;	
			}
		}
		kari.erase(kari.begin());
	}
	return ;
}

int main(){

	ll n,q;
	vector<pair<ll,ll>> a;
	cin>>n;

	rep(i,n){
		ll A;
		cin>>A;
		a.push_back(make_pair(A,-1));
	}

	cin>>q;
	ans.assign(q,0);

	for(ll i=0;i<q;i++){
		ll B;
		cin>>B;
		a.push_back(make_pair(B,i));
	}

	sort(a.begin(), a.end());

	ll le=-1,ri;
	ll now=0;
	
	while(now!=q+n){
		if(a.at(now).second==-1){
			ri=a.at(now).first;
			if(kari.size()!=0)countabs(le,ri);		
			le=ri;
			
		}else{
			kari.push_back(a.at(now));
		}
		now++;
	}
	for(ll i=0;i<kari.size();i++){
		ans.at(kari.at(i).second)=abs(le-kari.at(i).first);
	}

	for(ll i=0;i<q;i++)cout<<ans.at(i)<<endl;

    return 0;
}




