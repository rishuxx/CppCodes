#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the  number :" << endl;
    cin >> n;
    int row = 1;
    int count = 1;

while (row<=n)
{
    int col = 1;
    while (col<=n)
    {
        int num = (row - 1) * n + col;
        cout << num<<" ";
        col++;
    }
    cout << endl;
    row++;
}



    return 0;
}