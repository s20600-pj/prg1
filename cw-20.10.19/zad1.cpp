#include <iostream>

using namespace std;

int main(){

  int initNumber;
  cout << "Podaj liczbe: ";
  cin >> initNumber;

  //for (int i=initNumber; i>=0; i--){
  //  cout << i << endl;
  //}

  int i=initNumber;
  do {
    cout << i << endl;
  } while(i--);

  cout << "Koniec" << endl;

}
