#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 0;
  cin >> N;
  int JJ = 0;
  vector<vector<string>> ans(N,vector<string>(N));

  // 塗る
  for(int i = 1;i < N+1;i++){
    for(int j = 0;j < N;j++){
      JJ = N + 1 - i;
      if(i <= JJ){
        for(int k = i-1;k < JJ;k++){
          for(int l = i-1;l < JJ;l++){
            if(i % 2 == 1){
              ans.at(k).at(l) = "#";
            }else{
              ans.at(k).at(l) = "."; 
            }
          }
        }
      }
    }
  }

  // 答えを出力
  for(int i = 0;i < N;i++){
    for(int j = 0;j< N;j++){
      cout << ans.at(i).at(j);
    }
    cout << "" <<endl;
  }
}
