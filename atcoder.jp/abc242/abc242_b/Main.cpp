#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main(){

	vector<int> moji(27,0);

	string st;
	cin>>st;
	int size=st.size();

	
	rep(i,size){
		++moji.at(st.at(i)-97);
	}

	
	rep(i,26){
		//cout<<moji.at(i)<<endl;
		rep(j,moji.at(i)){
			char c=i+97;
			cout<<c;
		}
	}
	cout<<endl;



		
}