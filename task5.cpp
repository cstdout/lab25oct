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
   std::cout << std::endl;
   
   float avg = 0;
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
   std::sort(arr, arr + n);
   
   int firstMin = arr[0];
   int firstMax = arr[n - 1];
   int secondMin = -1, secondMax = -1;
   for(int i = 1; (secondMin == -1 || secondMax == -1) && i < (n - 1); ++i)
   {
       if (secondMin == -1 && arr[i] > firstMin)
       {
           secondMin = arr[i];
       }
       if(secondMax == -1 && arr[n - i] < firstMax)
       {
           secondMax = arr[n - i];
       }
       
   }
   std::cout << "Largest elems: " << firstMax << ' ' << secondMax << std::endl;
   std::cout << "Smallest elems: " << firstMin << ' ' << secondMin << std::endl;
   std::cout << "Max " << firstMax << " Min " << firstMin << std::endl;
   return 0;
   
}
