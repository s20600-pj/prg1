// Sandro Sobczynski, Maciej Leciejewski
#include <iostream>

using namespace std;

int main(){

  int i, j;
  cout << "Wprowadź liczbe do zgadniecia: ";
  cin >> i;
  do{
    cout << "Zgaduj: ";
    cin >> j;
  }while(i!=j);
  
  cout << "Brawo wygrales!" << endl;

}
