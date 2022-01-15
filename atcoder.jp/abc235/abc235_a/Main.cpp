#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){
   
	int x,a,b,c,ans;
	cin>>x;
	a=x/100;
	x%=100;
	b=x/10;
	c=x%10;

	//cout<<a<<" "<<b<<" "<<c<<endl;
	ans=111*(a+b+c);

 	cout<<ans<<endl;

    return 0;
}







