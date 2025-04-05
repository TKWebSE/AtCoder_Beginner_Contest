#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;

void solve() {
    // 問題ごとの実装を書く部分
    const ll inf = 1000000000;
    int n,m = 0;
    ll ans = 0;
    cin >> n >> m;
    // ll num = 0;
    for(int i = 0; i < m+1;i++){
        ans += (ll)pow(n,i);
        // cout << "num:" << num << endl;
        // cout << "ans:" << ans << endl;
    }
    // cout << "last:" << ans << endl;
    if(ans > inf || ans < 0){
        cout << "inf" << endl;
    }else{
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
