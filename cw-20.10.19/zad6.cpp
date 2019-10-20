// Sandro Sobczynski, Maciej Leciejewski
#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int *pointerToNumber;
    pointerToNumber = &number;
    cout << "Number is: " << number << " Pointer: " << pointerToNumber << endl;
}
