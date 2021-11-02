#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int> >;


int main(){
	int a,b;
	cin>>a>>b;
	bitset<100> A(a),B(b);
	//cout<<A<<" "<<B<<endl;
	rep(i,256){
		

		bitset<100> C(i),ans;
      ans=A^C;
      
		if(ans==B){
			cout<<i<<endl;
			return 0;
		} 
	}
	return 0;
}

