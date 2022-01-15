#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
   
	int n;
	cin>>n;
	vector<int> h(n);
	rep(i,n)cin>>h.at(i);

	int now=0;

	while(now!=n-1){
		if(h.at(now)<h.at(now+1)){
			now++;
		}else{
			break;
		}
	}

	cout<<h.at(now)<<endl;

}



