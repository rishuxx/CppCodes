#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    char ch;

    do
    {
        cout << "Enter the size of array: ";
        cin >> n;

        if (n <= 0) {
            cout << "Array size must be positive." << endl;
            continue;
        }

        vector<int> arr(n);

        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }

        cout << "Max element in the array is: " << max << endl;

        cout << "Do you want to enter a new array? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    cout << "Program ended." << endl;
    return 0;
}
