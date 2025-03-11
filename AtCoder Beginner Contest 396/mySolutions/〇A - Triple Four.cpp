#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  string ans = "";
  int N = 0;
  int count = 0;
  int x = 0;
  cin >> N;
  vector<int> A(N);
  for(auto& a : A) cin >> a;

  rep(i,N){
    if(A[i] == x){
      count++;
    }else{
      count = 1;
      x = A[i];
    }
    if(count >= 3){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
