#include <iostream>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  int ans = 0;
  for (int i = 1; i <= N; i++)
  {
    int tmp = findSumOfDigits(i);
    if (A <= tmp && tmp <= B)
    {
      ans += i;
    }
  }

  cout << ans << endl;
}

//calculate sum of each digits
int findSumOfDigits(int n){
  int sum = 0;
  while (n > 0){// repeat /10 until n == 0

    sum += n % 10;
    n /= 10;
  }
  return sum;
}
