#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	string st;
	cin>>st;
	int n=st.size();
	vector<int> x(n);

	int sum=0;
	rep(i,n){
		sum+=st.at(i)-48;
		x.at(n-i-1)=sum;
	}

	rep(i,n-1){
		x.at(i+1)+=x.at(i)/10;
		x.at(i)%=10;
	}

	while(x.at(n-1)>=10){
		x.push_back(x.at(n-1)/10);
		x.at(n-1)%=10;
		n++;
	}

	rep(i,n){
		cout<<x.at(n-i-1);
	}
	cout<<endl;



	//rep(i,n)cout<<x.at(i)<<endl;
	





    return 0;
}