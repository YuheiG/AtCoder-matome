#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

		int n;
		cin>>n;

		if(n>41)n++;

		if(n>9){
			cout<<"AGC0"<<n<<endl;
		}else{
			cout<<"AGC00"<<n<<endl;
		}



    return 0;
}