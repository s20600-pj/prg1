// Sandro Sobczynski, Maciej Leciejewski
#include <iostream>

using namespace std;

int main(){
  int sum=0;
  int currentNumber;
  do{
    cout << "Wprowadz liczbe: ";
    cin >> currentNumber;
    sum+=currentNumber;
  }while(currentNumber!=0);
  
  cout << "Wynik: " << sum << endl;
}
