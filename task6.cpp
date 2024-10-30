// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    
    int *arr = new int[n];
    
    cout << "Enter " << n << " numbers between 1 and 12" << endl;
    int number;
    int i = 0;
    while (i < n)
    {
        cin >> number;
        if (!(number >= 1 && number <= 12))
        {
            cout << "Number must be between 1 and 12" << endl;
        }
        else
        {
            arr[i] = number;
            ++i;
        }
    }
    
    for(int i = 0; i < n; ++i)
    {
        if (arr[i] > 8)
        {
            arr[i] = 8;
        }
        
    }
    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << ' ';
    }
    
    return 0;
}
