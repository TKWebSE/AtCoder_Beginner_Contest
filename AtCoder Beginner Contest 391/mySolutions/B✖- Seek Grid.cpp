#include <bits/stdc++.h>
using namespace std;

int searchT(int a,int b,vector<vector<string>> &S,vector<vector<string>> &T,int M){
  for(int i = 1;i < M-1;i++){
    for(int j = 1;j < M-1;j++){
      if(S.at(a+i-1).at(b+j-1) == T.at(i-1).at(j-1)){
        cout << "i:" << i << "j:" << j << endl; 
        if(i == M-1 && j == M-1){
          cout << a << " " << b << endl;
          return 1;
        }
      }else{
        return 0;
      }
    }
  }
}

int main() {
  int a = 0;
  int b = 0;
  int N = 0;
  int M = 0;
  string x = "";
  cin >> N >> M;
  cout << N << M << endl;
  vector<vector<string>> S(N,vector<string>(N));
  vector<vector<string>> T(M,vector<string>(M));

  // 標準入力を受け取る(S)
  for(int i = 0;i < N;i++){
    for(int j = 0;j < N;j++){
      cin >> x;
      S.at(i).at(j) = x;
    }
  }

  // 標準入力を受け取る(T)
  for(int i = 0;i < M;i++){
    for(int j = 0;j < M;j++){
      cin >> x;
      T.at(i).at(j) = x;
    }
  }

  // a,bを求める
  for(int i = 0;i < N;i++){
    for(int j = 0;j < N;j++){
      if(S.at(i).at(j) == T.at(0).at(0)){
        // cout << i << "-"<< j << endl;
        if(searchT(i,j,S,T,M) == 1){
          break;
        }
      }
    }
  }
}
