#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using Graph = vector<vector<int> >;

int main() {
    
    int64_t X,x = 100;
  	cin>>X;
    int ans = 0;
    while (x < X) {
        x = x + x / 100;
        ans++;
    }
    cout << ans << endl;
}