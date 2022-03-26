#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	int n,k;
	cin>>n>>k;
	vector<int> a(n),b(n);

	rep(i,n)cin>>a.at(i);
	rep(i,n)cin>>b.at(i);
	
	bool a_r=true,b_r=true;
	bool a_n=false,b_n=false;

	rep(i,n-1){
		a_n=false;
		b_n=false;
		if(a_r){
			if(abs(a.at(i)-a.at(i+1))<=k)a_n=true;
			if(abs(a.at(i)-b.at(i+1))<=k)b_n=true;
		}
		if(b_r){
			if(abs(b.at(i)-a.at(i+1))<=k)a_n=true;
			if(abs(b.at(i)-b.at(i+1))<=k)b_n=true;

		}

		if((!a_n)&&(!b_n)){
			cout<<"No"<<endl;
			return 0;
		}

		a_r=a_n;
		b_r=b_n;
	}
	cout<<"Yes"<<endl;

    return 0;
}