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
    int n,k,ans;
    cin >> n >> k;
    vector<int> a(n+1);
    int num = 0;
    rep(i,n){
        if(i < k){
            a[i] = 1;
            num+=1;
        }else{
            a[i] = num;
            num = num + a[i] - a[i-k];
        }
        cout << a[i]<< endl;
    }
    ans = a[n];
    ans = ans % 1000000000;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
