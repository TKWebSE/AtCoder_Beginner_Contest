#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec(5);
  int answer = false;
  for(int i = 0;i < 5;i++){
    cin >> vec.at(i);
  }
  int A = 0;
  for(int i = 0;i < 5;i++){
    if(vec.at(i) != i + 1){
      if(vec.at(i) > i+1){
        A = vec.at(i);
        vec.at(i) = vec.at(i+1);
        vec.at(i+1) = A;
      }
      if(vec.at(i) < i+1){
        A = vec.at(i);
        vec.at(i) = vec.at(i-1);
        vec.at(i-1) = A;
      }
      break;
    }
  }

  // チェックする
  for(int i = 0;i < 5;i++){
    if(vec.at(i) != i+1){
      break;
    }
    if(i == 4 && A != 0){
      answer = true;
    }
  }

  // 答えを出力する
  if(answer){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
