#include <iostream>
#include <cstdlib>
#include <algorithm>
int main() {
    srand(time(0)); 
    const int n = 20;
       

   int *arr = new int[n];
   int counter = 0;
   int sum = 0;
   for(int i = 0; i < n; ++i)
   {
       arr[i] = rand() % 102 - 1;
       sum += arr[i];
   }
   std::cout << "Total number of elements: " << n << std::endl;
   std::cout << "Total sum: " << sum << std::endl;
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
   return 0;
   
}
