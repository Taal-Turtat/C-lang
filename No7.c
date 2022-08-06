#include<bits/stdc++.h>
using namespace std;

int a,b;

int main(){
  cin >> a >> b;
  bool x = a < 10;
  bool y = a < b;
  if(x && y){
    cout << a << "は10より小さくて、" << b << "より小さいです。" << endl;
  }
  else{
    cout << "知るかよ" << endl;
  }
}
