#include<bits/stdc++.h>
using namespace std;

int main(){
  int x1 = 0;
  int y1 = 0;
  int z1 = 0;
  int x2 = 0;
  int y2 = 0;
  int z2 = 0;

  //zで入力を受ける
  cout << "Input the First Vector" << endl;
  cin >> x1;
  cin >> y1;
  cin >> z1;

  //次のベクトルを入力します
  cout << "Input the Second Vector" << endl;
  cin >> x2;
  cin >> y2;
  cin >> z2;

  cout << "cross!" << endl;

  cout << " ";
  cout << y1 * z2 - z1 * y2 << endl;
  cout << z1 * x2 - x1 * z2 << endl;
  cout << x1 * y2 - y1 * x2 << endl;
}

  
	  
