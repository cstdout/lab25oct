#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0)); 
    const int N = 100;
    int* arr = new int[N];
    for(int i = 0; i < N; ++i)
    {
        arr[i] = (rand() % 2);
    }
    int seqLen = 0;
    int theLongestSeq = 0;
    for(int i = 0; i < N; ++i)
    {
        if (arr[i] == 0)
        {
            ++seqLen;
        }
        else
        {
            if (theLongestSeq < seqLen)
            {
                theLongestSeq = seqLen;
            }
            seqLen = 0;
        }
    }
    cout << theLongestSeq << endl;

    return 0;
}
