#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number : " << endl;
    cin >> n;
    int row = 1;


while (row<=n)
{
    int col = 1;
    while (col<=n)
    {
        int rev = n - col + 1; //basically this is main here insede while loop in each ietration col is changing so we used n-col+1 
        cout << rev;
        col++;
    }

    cout << endl;
    row++;
}


    return 0;
}