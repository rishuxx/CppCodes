#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number";
    cin >> n;
    int row = 1;
     
    
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {

            // char ch = 'A' + row + col - 2;
            int ch = row+col-1; 
            cout << ch << " ";
            ch++;
            col++;

        }
        cout << endl;
        row++;
        }
    
}