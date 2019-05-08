// class implementation for the prime number function

/* the for loops/if-else statements check to see if the entered number is 
divisible by 1 or itself */

#include <iostream>

using namespace std;

class prime
{
    public: 
    int x;
    int num;

    void primenum (int num)
{
    int x(0);
    
    cout << "\nPrime numbers up to " << num << ": ";
    
    for (int a = 2; a < num; a++)
    {
        for (int b = 2; b < a; b++)

            // Checks for divisible number
            if (a % b == 0)
            {
                x = 1;
            } 

        // Prints the prime numbers leadding up to the entered value
        if (x == 0)
            cout << a << " ";
        else 
            x = 0;
    }

        cout << endl;
        cout << "\nAll " << num << " prime numbers: ";

    int bb = 0, a = 2;

    while (bb < num)
    {
        for (int b = 2; b < a; b++)
        {
            // Checks for divisible number
            if(a % b == 0)
            {
                x = 1;
            }
        }
        
        // Prints out N number of prime values from the entered value of "num"
        if (x == 0)
        {
            cout << a << " ";
            bb++;
        }
        else
            x = 0;
            a++;
    }
    cout << endl;
    return;
}

};