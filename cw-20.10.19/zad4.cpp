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
    if(j>i) cout << "Liczba jest za duza." << endl;
    else if(i>j) cout << "Liczba jest za mala." << endl;
  }while(i!=j);
  
  cout << "Brawo wygrales!" << endl;

}
