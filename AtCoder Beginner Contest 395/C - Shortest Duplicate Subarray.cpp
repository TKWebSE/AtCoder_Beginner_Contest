#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = -1;
  int N = 0;
  int count = 1;
  cin >> N;
  vector<int> A(N);

  for(auto& a:A)cin >> a;
  
  for(int i = 0;i < N;i++){
    int x = A.at(i);
    count = 1;
    for(int j = i+1;j < N;j++){
      count++;
      if(A.at(i) == A.at(j)){
        if(ans == -1||ans > count){
          ans = count;
          break;
        }
      }
    }
  }

  cout << ans << endl;
}
