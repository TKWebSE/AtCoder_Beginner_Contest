#include <bits/stdc++.h>
using namespace std;

int main() {
  int N =0;
  cin >> N;
  vector<long> A(N);
  bool answer = true;

  if(N <= 2){
    cout << "Yes" << endl;
    return 0;
  }
 
  for(int i = 0;i < N;i++){
    cin >> A.at(i);
  }
  
  // チェックする
  for(int i = 1;i < N;i++){
    if(A.at(i) * A.at(i+2) != A.at(i+1) * A.at(i+1)){
      answer = false;
    }
  }

  // 答えを出力する
  if(answer){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
