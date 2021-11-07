#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main() {
	double x,b;
	cin>>x;
	int a;
	a=x/1;
	b=x-a;
	if(b<0.5){
		cout<<a<<endl;
	}else{
		a++;
		cout<<a<<endl;
	}
	
    return 0;
}