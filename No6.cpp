#include<iostream>
using namespace std;

int main(){
  int x1, y1, z1;
  int x2, y2, z2;
  int res;
  int chx, chy, chz;
  int mes;
  cout << "Input the First Vector" << endl;
  cin >> x1 >> y1 >> z1;
  cout << "Insput the Second Vector" << endl;
  cin >> x2 >> y2 >> z2;
  cout << "dot!" << endl;
  res = x1 * x2 + y1 * y2 + z1 * z2;
  if (x2 != 0 && y2 != 0 && z2 != 0){
    mes = 0;
    chx = x1 / x2;
    chy = y1 / y2;
    chz = z1 / z2;
  }
  if(x1 != 0 && y1 != 0 && z1 != 0){
    mes = 0;
    chx = x2 / x1;
    chy = y2 / y1;
    chz = z2 / z1;
  }
  else{
    if(!(x1,y1,z1 == 0)||!(x2,y2,z2 == 0)){
      mes = 0;
    }
    else{
      mes = 1;
    }
  }
  cout << res << endl;
  if (res == 0 && mes == 0){
    cout << "This is a vertical inner product." << endl;
  }
  if (chx == chy && chy == chz && mes == 0){
    cout << "This is a lateral inner product." << endl;
  }
  if(mes == 1){
    cout << "Please insert three interger which are not zero." << endl;
  }
}
