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
    int s;
    cin >> s;
    
    if(s >= 200 && s <= 299){
        cout << "Success" << endl;
    }else{
        cout << "Failure" << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
