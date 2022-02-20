#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int N;
  int d[110];
  cin >> N;
  for(int i = 0; i < N; i++) cin >> d[i];

  int num[110] = {0};   //baquet
  for (int i = 0; i < N; i++){
    num[d[i]] += 1;
  }

  int res = 0;
  for (int i = 1; i < 100; i++){
    if (num[i]) {
          res++;
    }
  }
  cout << res << endl;
}
//std::set
/* set<int> values;//delete the same factor when insert
for(int i = 0; i < N; i++){
  values.insert(d[i]);

cout << values.size() << endl;
} */
