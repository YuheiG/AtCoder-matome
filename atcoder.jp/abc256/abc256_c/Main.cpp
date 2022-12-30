#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define ft first
#define sd second
template<class T> using V = std::vector<T>;

using namespace std;
using Graph = vector<vector<int>>;

int main() {
    vector<int> h(3), w(3);
    rep(i, 3) { cin >> h.at(i); }
    rep(i, 3) { cin >> w.at(i); }
    ll ans = 0;
	if(h.at(0)+h.at(1)+h.at(2)!=w.at(0)+w.at(1)+w.at(2)){
		cout<<0<<endl;
		return 0;
	}
    rep(i, 30) {
        rep(j, 30) {
            rep(k, 30) {
                rep(l, 30) {
                    if (w.at(0) - i - j - 2 < 1) continue;
                    if (w.at(1) - k - l - 2 < 1) continue;
                    if (h.at(0) - i - k - 2 < 1) continue;
                    if (h.at(1) - j - l - 2 < 1) continue;
                    if (w.at(2) - h.at(0) - h.at(1) + i + j + k + l + 4 < 1)
                        continue;
                    if (h.at(2) - w.at(0) - w.at(1) + i + j + k + l + 4 < 1)
                        continue;
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
