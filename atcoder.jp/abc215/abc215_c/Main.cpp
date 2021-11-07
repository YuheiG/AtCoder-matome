#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {

	string s;
	int k;
	cin>>s>>k;

	vector<int> word;

	rep(i,s.size())word.push_back(s.at(i));
	
	sort(word.begin(),word.end());
	int count=1;
	if(k==1){
		rep(i,s.size()){
			char c=word.at(i);
			cout<<c;
		}
		cout<<endl;
		return 0;
	}


	while(next_permutation(word.begin(),word.end())){
		count++;
		if(count==k){
			rep(i,s.size()){
				char c=word.at(i);
				cout<<c;
			}
			cout<<endl;
			return 0;
		}
	}

    return 0;
}