#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;



int main(){

	string s,t;

	cin>>s>>t;
	int sa=t.at(0)-s.at(0);
	if(sa<0)sa+=26;
	int n=s.size();
	for(int i=1;i<n;i++){
		int c=t.at(i)-s.at(i);
		if(c<0)c+=26;
		if(sa!=c){
			cout<<"No"<<endl;
			return 0;
		}
	}

	cout<<"Yes"<<endl;


    return 0;
}




