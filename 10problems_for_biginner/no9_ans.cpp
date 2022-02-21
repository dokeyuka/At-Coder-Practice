#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string divide[4] = {"dream", "dreamer", "eraser", "erase"};

int main(){
  string S;
  cin >> S;
  int N = S.size();

  //reverse in order to solve from the last
  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++)
    reverse(divide[i].begin(), divide[i].end());

  //cut from the edge
  bool can = true;
  for (int i = 0; i < N;){
    //you can cahnge the number of increment like this!!!

    bool can2 = false;//which of 4 strings in divide can divide

    for (int j = 0; j < 4; j++){
      string d = divide[j];
      if(S.substr(i, d.size()) == d){// if can be divided by d
        can2 = true;
        i += d.size();//increment i if you can divide
      }
    }
  if(!can2) {
    can = false;
    break;
  }
  }

  if(can)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
