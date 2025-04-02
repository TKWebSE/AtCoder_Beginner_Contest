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
    queue<int> q;
    int n;
    cin >> n;
    rep(i, n) {
        int a;
        cin >> a;
        if(a == 1){
            cin >> a;
            q.push(a);
        }else{
            a = q.front();
            cout << a << endl;
            q.pop();
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
