#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(v) v.begin(), v.end()
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using pii = pair<int, int>;

void solve() {
    int n,ans = 0;
    cin >> n;
    vector<vector<char>> gridS(n, vector<char>(n));
    vector<vector<char>> gridT(n, vector<char>(n));
    vector<vector<char>> gridT90(n, vector<char>(n));
    vector<vector<char>> gridT180(n, vector<char>(n));
    vector<vector<char>> gridT270(n, vector<char>(n));
    vector<int> cnt(4, 0);
    rep(i, n) {
        rep(j, n) {
            cin >> gridS[i][j];
        }
    }
    rep(i, n) {
        rep(j, n) {
            cin >> gridT[i][j];
        }
    }
    rep(i, n) {
        rep(j, n) {
            gridT90[i][j] = gridT[n-j-1][i]; // 90度回転
            gridT180[i][j] = gridT[n-i-1][n-j-1]; // 180度回転
            gridT270[i][j] = gridT[j][n-i-1]; // 270度回転
        }
    }
    // 合ってる数を数える
    rep(i,n){
        rep(j,n){
            if(gridS[i][j] == gridT[i][j]){
                cnt[0]++;
            }
            if(gridS[i][j] == gridT90[i][j]){
                cnt[1]++;
            }
            if(gridS[i][j] == gridT180[i][j]){
                cnt[2]++;
            }
            if(gridS[i][j] == gridT270[i][j]){
                cnt[3]++;
            }
        }
    }
    // rep(i,n){
    //     rep(j,n){
    //         cout << gridT180[i][j];
    //     }
    //     cout << endl;
    // }

    // 一番多い奴を探す
    int max_cnt_index = 0;
    rep(i,4){
        if(cnt[i] > cnt[max_cnt_index]){
            max_cnt_index = i;
        }
    }
    // 回転数とその回転数の時の間違ってる数の合計を出力
    cout << cnt[max_cnt_index] << endl;
    cout << max_cnt_index << endl;
    ans = (n * n - cnt[max_cnt_index]) + max_cnt_index;
    cout << ans << endl;
    return;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
