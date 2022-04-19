#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	map<int,int> b;
	vector<int> a(n);

	

	rep(i,n)cin>>a.at(i);
	rep(i,n){
		int A;
		cin>>A;
		b.insert(make_pair(A,i));
	}

	int ans1=0;
	int ans2=0;

	rep(i,n){

		if(b.find(a.at(i))!=b.end()){
			if(b.at(a.at(i))==i){
				ans1++;
			}else{
				ans2++;
			}

		}
	}

	cout<<ans1<<endl<<ans2<<endl;




	
	return 0;		
}