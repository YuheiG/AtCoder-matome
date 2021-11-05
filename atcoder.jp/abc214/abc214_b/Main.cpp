#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
using namespace std;
using Graph = vector<vector<int>>;

int main() {
	int s,t,ans=0;
	cin>>s>>t;

	for(int a=0;a<=s;a++){
    
		for(int b=0;a+b<=s;b++){
			for(int c=0;a+b+c<=s&&a*b*c<=t;c++){
              
				ans++;
			}
		}
	}
	cout<<ans<<endl;

    return 0;
}