#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	set<string> poem;
	int n;
	cin>>n;
	vector<int> ten(n);

	rep(i,n){
		string p;
		cin>>p;
		cin>>ten.at(i);
		if(poem.find(p)!=poem.end()){
			ten.at(i)=-1;
		}else{
			poem.insert(p);
		}
	}

	int ans=0;
	int max=-1;
	rep(i,n){
		if(ten.at(i)>max){
			max=ten.at(i);
			ans=i+1;
		}
	}

	cout<<ans<<endl;


	return 0;

}


