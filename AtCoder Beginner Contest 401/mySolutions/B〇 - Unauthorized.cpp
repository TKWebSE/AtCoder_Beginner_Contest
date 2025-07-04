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
    int ans = 0;
    int n;
    cin >> n;
    vector<string> s(n);
    bool isLogin = false;
    for(auto& x:s) cin >> x;

    rep(i,n){
        if(s[i] == "login"){
            isLogin = true;
        }else if(s[i] == "logout"){
            isLogin = false;
        }else if(s[i] == "public"){
            // なし
        }else if(s[i] == "private"){
            if(isLogin == false){
                ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
