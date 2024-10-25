#include <iostream>
#include <cstdlib>
#include <algorithm>
int main() {
    srand(time(0)); 
    const int n = 20;
       

   int *arr = new int[n];
   int counter = 0; 
   for(int i = 0; i < n; ++i)
   {
       arr[i] = rand() % 101 - 1;
       std::cout << arr[i] << ' ';
   }
   int avg = 0;
   int evenCounter = 0;
   for(int i = 0; i < n; ++i)
   {
       avg += arr[i];
       if(!(arr[i] & 1))
       {
           ++evenCounter;
       }
   }
   avg /= n;
   std::cout << "Average " << avg << std::endl;
   std::cout << "Evens " << evenCounter << std::endl;
   int firstMax =  *(std::min(arr, arr + n));
   int firstMin = *(std::max(arr, arr + n));
   std::cout << "Max " << firstMax << " Min " << firstMin << std::endl;
   return 0;
   
}
