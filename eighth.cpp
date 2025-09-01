
// Sum upto n termms

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    int sum = 0;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        sum = sum + num;
        num = num + 1;
    }
    cout << "sum of numbers is : " << sum << endl;


}