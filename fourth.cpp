#include <iostream>
using namespace std;

int main(){

    int a;
    char ch;
    int fact = 1;

    do
    {
        cout << "Enter the number" << endl;
        cin >> a;
          
        for (int i = 1; i <= a; i++)
        {
            fact *= i;
        }

      cout << "Factorial of number " << a << " is: " << fact << endl;



        cout << "want to find for another number (y/n)" << endl;
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    cout << "you choosed wrong option Exiting ";

    return 0;
}



