#include <bits/stdc++.h>
using namespace std;

// EX23 - 最頻値
int main() {
  int N = 0;
  int num = 0;
  map <int,int> numbers;
  cin >> N;
  for(int i = 0;i < N;i++){
    cin >> num;
    if(numbers.count(num)){
      numbers.at(num) = numbers.at(num) + 1;
    }else{
      numbers[num] = 1; 
    }
  }

  pair <int,int> answer;
  for(auto p :numbers){
    if(answer.second < p.second){
      answer = p;
    }
  }

  cout << answer.first << " " << answer.second << endl;
}
