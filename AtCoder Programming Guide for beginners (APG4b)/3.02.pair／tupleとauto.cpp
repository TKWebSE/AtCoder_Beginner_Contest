#include <bits/stdc++.h>
using namespace std;

// EX22 - 2つ目の値でソート
int main() {
  using vi = vector<pair<int,int>>;
  int N;
  int first;
  int second;
  
  // 標準入力を受け取る
  cin >> N;
  vi data(N);
  for(pair<int,int> &p:data){
    cin >> first >> second;
    p = make_pair(second,first);
  }

  // 並び変える
  sort(data.begin(),data.end());

  // 表示する
  for(auto p:data){
    tie(second,first) = p;
    cout << left << " " << right << endl;
  }
}
