#include <iostream>
using namespace std;

int main () {
  int N;
  int A[210];


  cin >> N;
  for (int i = 0; i < N; i++) cin >> A[i];

  int counter = 0;
  bool odd_flag = false;
  while(true){
    for (int i = 0; i < N; i++){
      if(A[i] % 2 == 1){
        odd_flag = true;
        break;
      }
      else{
        continue;
      }
    }

    if(odd_flag){
      break;
    } else {
      for (int i = 0; i < N; i++){
        A[i] = A[i] / 2;
      }
        counter += 1;
    }

  }
  cout << counter << endl;
}
