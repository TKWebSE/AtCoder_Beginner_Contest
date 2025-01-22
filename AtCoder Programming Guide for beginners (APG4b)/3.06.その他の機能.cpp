#include <bits/stdc++.h>
using namespace std;

// EX26 - 電卓を作ろう3 

// 整数の変数を宣言
int declarationInt(int x){

}

// 整数の値を出力
void printInt(int x){

}

// 配列の変数を宣言
void declarationVec(vector ){

}

// 配列の値を出力
void print_vec(vector<int> vec) {
  cout << "[ ";
  for (int i = 0; i < vec.size(); i++) {
    cout << vec.at(i) << " ";
  }
  cout << "]" << endl;
}


int main() {
  int N =0;
  cin >> N;
  vector<string> codes(N);

  // 命令を受け取る
  for(int i = 0;i < N;i++){
    cin >> codes.at(i);
  }
  // 計算する
  
  // 答えを出力する
  cout << "Hello, world!" << endl;
}
