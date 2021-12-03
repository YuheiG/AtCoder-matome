#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	float f;
	int x,y;
	cin>>f;
	x=f*10;
	y=x%10;
	x=x/10;

	cout<<x;
	if(y<=2){
		cout<<"-"<<endl;
	}else if(y<=6){
		cout<<endl;
	}else{
		cout<<"+"<<endl;
	}



	return 0;
}
	





