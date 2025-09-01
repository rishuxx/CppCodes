#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    char ch;




    do
    {
     cout << "Enter A" << endl;
    cin >> a;
    cout << "Enter B" << endl;
    cin >> b;

    if (a>b)                
    {
        cout << "value of A is greater then B by the diffrence of " << a-b << endl;
    }
    else
    {
        cout << " value of B is greater by the diffrence of " << b-a << endl;
    }

    cout << "Want to check for another number" << endl;
    cin >> ch;

    } while (ch=='y' || ch=='Y');

    cout << "Exiting";
}