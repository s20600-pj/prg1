// Sandro Sobczynski, Maciej Leciejewski
#include <iostream>

using namespace std;

int main(){

  int size;
  cout << "Podaj wielkosc diamentu: ";
  cin >> size;

//  *
// * *
//*   *
// * *
//  *

  for(int i=0;i<=size*2;i++){


    if(i<=size){

      int lSpaces=size-i;
      for(int x=0;x<lSpaces;x++)
        cout << " ";
      cout << "*" << endl;

      //if(i != 0){
      //  int mSpaces;
      //  cout << "!";
      //}

    }else{

      int lSpaces=i-size;
      for(int x=0;x<lSpaces;x++)
        cout << " ";
      cout << "*" << endl;

    }

  }



}
