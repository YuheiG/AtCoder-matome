#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {


	ll n,comp=1;
	cin>>n;
	
	for(int i=0;true;i++){
		if(comp>n){
			i--;
			cout<<i<<endl;
			return 0;
		}
		comp*=2;
	}
    return 0;
}