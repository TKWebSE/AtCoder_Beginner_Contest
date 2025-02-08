#include <bits/stdc++.h>
using namespace std;

int main() {
  string answer ="No";
  int N = 0;//1 以上 N 以下の整数
  int M = 0;//長さ
  int C = 0;//答えの数
  cin >> N >> M;
  vector<int> A(M);
  vector<int> X;

  // 標準入力をAに入れる
  for(auto& x : A) cin >> x;
  
  // Aの全ての要素と一致するか
  // i:数字
  // j:要素
  for(int i = 1;i <= N;i++){
    for(int j = 0;j < M;j++){
      if(i == A.at(j)){
        break;
      }else if(j == M-1){
        X.push_back(i);
        C++;
      }
    }
  }
  // 答えを出力
  cout << C << endl;
  for(auto& x : X) cout << x << " ";
}
