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
    string s;
    string ans;
    cin >> s;

    rep(i,s.size()){
        if(!(s[i] >= 'a' && s[i] <= 'z')){
            ans += s[i];
        }
    }
    cout << ans << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
