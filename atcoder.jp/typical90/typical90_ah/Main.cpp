#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n,k;
	cin>>n>>k;
	vector<ll> a(n);
	rep(i,n)cin>>a.at(i);

	int lef=0;
	map<ll,int> list;
	int ans=0,max_l=0,kind=0;

	rep(rig,n){
		//cout<<lef<<" "<<rig<<endl;

		if(list.find(a.at(rig))==list.end()){
			kind++;
			list.insert(make_pair(a.at(rig),1));
		}else{
			list.at(a.at(rig))++;
		}
		if(kind>k){
			while(kind!=k){				
				if(list.at(a.at(lef))==1){
					kind--;
					list.erase(a.at(lef));
				}else{
					list.at(a.at(lef))--;
				}
				lef++;
			}
		}
		max_l=max(max_l,rig-lef+1);
	}

	cout<<max_l<<endl;



    return 0;
}