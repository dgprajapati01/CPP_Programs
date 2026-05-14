#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array";
    cin >> n;

    int arr[n]; 

    cout << "Enter Elements" << n << endl;


    for (int i=0; i < n; i++) 
    {
        cout << "Elements" << i+1 << " : ";
        cin >> arr[i]; 
    }

    
    cout << "\n The Elements in the Array are ";


    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " "<< endl;
    }

    return 0;
}