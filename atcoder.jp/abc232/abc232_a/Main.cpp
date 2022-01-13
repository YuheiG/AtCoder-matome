#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	string s;
	cin>>s;
	char a=s.at(0),b=s.at(2);

	int A,B,ans;
	A=a-48;
	B=b-48;
	ans=A*B;
	cout<<ans<<endl;


    return 0;
}

