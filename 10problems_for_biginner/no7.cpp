#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int N;
  int d[110];
  cin >> N;
  for (int i = 0; i < N; i++) cin >> d[i];

  sort(d, d + N);

  int cnt = 1;
  for (int i = 0; i < N-1; i++){
    if(d[i] != d[i+1]){
      cnt += 1;
    }
  }
  cout << cnt << endl;
}


