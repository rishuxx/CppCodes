#include <iostream>
using namespace std;

int main(){

    int a;
    char ch;



do
{
    cout << "Enter the numbr to find out odd or even" << endl;
    cin>> a;

    if(a%2==0){
        cout << "Even" << endl;
    }
    else
            {cout << "odd" << endl;
            }
    

    cout << "you want for another number (y/n)" << endl;
    cin >> ch;

} while (ch=='y' || ch=='Y');

cout << "Exiting" << endl;

return 0;
}