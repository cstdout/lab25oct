#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0)); 
    const int N = 10;
    int* evens = new int[N];
    int num;
    for(int i = 0; i < N; ++i)
    {
        num = rand() % 50;
        if (num & 1)
        {
            --num;
        }
        evens[i] = num;
    }
    int* squares = new int[N];
    int r;
    for(int i = 0; i < N; ++i)
    {
        num = (rand() % 50 + 1);
        if (num < 3)
        {
            num = 3;
        }
        else
        {
            r = num % 3;
            if (r)
            {
                num -= r;
            }
        }
        
        squares[i] = num;
    }
    for(int i = 0; i < N; ++i)
    {
        cout << evens[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < N; ++i)
    {
        cout << squares[i] << ' ';
    }
    return 0;
}
