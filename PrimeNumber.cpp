#include<iostream>
using namespace std;

int main(){
    int n;
    int ch;
    cout<<"Enter the number";
    cin >> n;

    int num = 2;

do
{
while (num<n)
    {
        if (n%num==0)
        {
            cout << "Prime for" << num << endl;
        }
        else
            cout << "not Prime for" << num << endl;

        num = num + 1;
    }

    cout << "Want to continue press Y/y" << endl;
    cin >> ch;
} while (ch =='y' || ch=='Y');


    
    
}