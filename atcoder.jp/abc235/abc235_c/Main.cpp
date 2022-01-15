#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
	map<int,vector<int>> a;

	int n,q;
	cin>>n>>q;
	rep(i,n){
		int A;
		cin>>A;
		if(a.find(A)==a.end()){
			vector<int> v;
			v.push_back(i+1);
			a.insert(make_pair(A,v));
		}else{
			a.at(A).push_back(i+1);
		}
	}

	rep(i,q){
		int x,k;
		cin>>x>>k;
		k--;
		if(a.find(x)==a.end()){
			cout<<-1<<endl;
		}else{
			if(a.at(x).size()>k){
				cout<<a.at(x).at(k)<<endl;;
			}else{
				cout<<-1<<endl;
			}
		}
	}

	return 0;
	

}



