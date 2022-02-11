#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;


int main(){

	int l,r;
	string str;
	cin>>l>>r>>str;
	l--;r--;
	int size=str.size();
	stack<char> sta;

	rep(i,size){
		if(i<l||i>r){
			cout<<str.at(i);
		}else if(i==r){
			sta.push(str.at(i));
			while(!sta.empty()){
				cout<<sta.top();
				sta.pop();
			}

		}else{
			sta.push(str.at(i));
		}
	}
	cout<<endl;

    return 0;
}