#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	ll k,sa_all=0;
	int n;
	cin>>n>>k;

	vector<int> a(n),b(n);

	rep(i,n)cin>>a.at(i);
	rep(i,n)cin>>b.at(i);

	rep(i,n)sa_all+=abs(a.at(i)-b.at(i));
	
	if(k>=sa_all&&(k-sa_all)%2==0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}



    return 0;
}




