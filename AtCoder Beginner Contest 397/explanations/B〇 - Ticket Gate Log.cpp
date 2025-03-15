#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0;i < (n);i++)

int main() {
  int count = 0;
  string n;
  cin >> n;

  rep(i,n.size()) {
    if(i % 2 == 0){
      if(n[i] == 'o'){
        if(i == 0) "i" + n;
        n.insert(i,"i");
        count++;
      }
    }else{
      if(n[i] == 'i'){
        n.insert(i,"o");
        count++;
      }
    }
  }
  if(n.size() % 2 != 0){
    count++;
  }

  cout << count << endl;
  return 0;
}
