#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;




int main(){

	int n,k,a;
	cin>>n>>k>>a;
	k=k%n;
	a--;
	a=a+k-1;
	a%=n;
	a++;


	cout<<a<<endl;

    return 0;
}




