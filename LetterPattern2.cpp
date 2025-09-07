#include <iostream>
using namespace std;

int main() {
      int n;
    cout << "Enter the number"<<endl;
    cin >> n;
    int row = 1;

    while (row<=n)
    {
        int col = 1;
        char ch = 'A' ;
        while (col<=n)
        {
            // char ch = 'A' + row - 1;
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;   
    }
    




    return 0;
}