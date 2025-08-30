#include<iostream>
#include<vector>
using namespace std;

int main (){

    int n;
    vector<int> arr(n); 



    cout << "Enter the size of array" << endl;
    cin >> n;

    //vector is used to take arr that can grow (Dynamic) unless like normall array
    cout << "enter the elemnts " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if(arr[i]> max)
            max = arr[i];

    }

    cout << "Max element is = " << max << endl;
    return 0;
}