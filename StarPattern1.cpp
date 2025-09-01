
/*
if input is 3 then star patter will be row = col = 3

                       ***
                       ***
                       ***
*/





#include <iostream>
using namespace std;

int main() {
    cout << "enter number " << endl;
    int n;
    cin >> n;

    int row = 1; //first row

    while (row<=n)
    {
        int col = 1;
        while (col<=n)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }
    




}

