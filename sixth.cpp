//Print upto n number
#include<iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int num = 1;

    for (int i = 0; i < n; i++)
    {
        cout << num << " " ;
        num = num + 1;
        
    }

    cout << endl;

    int y;
    cout << "Enter number to print for even numbers" << endl;
    cin >> y;

    int even = 2;
    for (int i = 0; i < y; i++)
    {
        cout << even << " ";
        even = even + 3;
    }
    
}