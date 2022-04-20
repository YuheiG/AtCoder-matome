#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	int n;
	cin>>n;
	set<int> ban;
	int in=-1,i=1;

	while(in!=0){
		for(i;i<2*(n+1);i++){
			if(ban.find(i)==ban.end()){
				cout<<i<<endl;
				ban.insert(i);
				break;
			}
		}
		
		if(ban.size()==(2*n+1)){
			cout<<0<<endl;
			return 0;
		}
		cin>>in;
		ban.insert(in);
	}

	return 0;	
}