#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  string ans = "";
  cin >> N;
  vector<string> S(N);

  for(auto& s:S) cin >> s;
  
  // 並べ替え
  for(int i = 0;i < N;i++){
    // 一番小さい数を求める
    int num = (int)S.at(0).size();
    for(int j = 0;j < (int)S.size();j++){
      if(num > (int)S.at(j).size()){
        num = (int)S.at(j).size();
      }
    }
    cout << num;
    // 結合
    ans += (string)S.at(num);
    S.erase(S.begin(),S.begin() + num);
  }

  cout << ans << endl;
}
