#include<iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter the number for finiding the factorial" << endl;
    cin >> n;

    int num = 1;
    int fact = 1;

    for (int i = 1; i <= n; i++){

        fact = fact * num;
        num = num +1;
    }
    cout << endl;
    
    cout << "the factorial of " << n << " is " << fact;
}