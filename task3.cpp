#include <iostream>
#include <cstdlib>
int main() {
    srand(time(0)); 
    const int n = 50;
       

   int *arr = new int[n];
   int counter = 0; 
   for(int i = 0; i < n; ++i)
   {
       arr[i] = rand() % 101 - 1;
       std::cout << arr[i] << ' ';
   }
   
   std::cout << std::endl;
   for(int i = 0; i < n; ++i)
   {
       if(arr[i] > 50)
       {
           ++counter;
       }
   }
    std::cout << counter << std::endl;
    return 0;
}
