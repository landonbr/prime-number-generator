#include <iostream>
#include "primeclass.cpp"

int main()
{
    int value;
    char char1('y');
    prime obj;

    // loops the function until user is satisfied
    while(char1 =='y' || char1 == 'Y')
    {
    cout << "Enter a value for the prime function: ";
    cin >> value;
    cout << endl;
    obj.primenum(value);
    cout << endl;

    cout << "Enter y to try again or anything else to quit: ";
    cin >> char1;
    cout << endl;
    }

    cout << "Coded by Landon Brown" << endl;
    return 0;
}