#include <iostream>
#include <cstdlib>
int main() {
    srand(time(0)); 
    int n;
    std::cin >> n;    

   int *arr = new int[n];
    
   for(int i = 0; i < n; ++i)
   {
       arr[i] = rand() % 201 - 100;
       std::cout << arr[i] << ' ';
   }
   std::cout << std::endl;
   int *uniqueElems = new int[n];
   int uniqueElemCount = 0;
   bool exists;
   for(int i = 0; i < n; ++i)
   {
       exists = false;
       for(int j = 0; !exists && j < uniqueElemCount; ++j)
       {
           exists = (arr[i] == uniqueElems[j]);
       }
       if (!exists)
       {
           
           uniqueElems[uniqueElemCount] = arr[i];
           ++uniqueElemCount;
       }
   }
   int *occurances = new int[uniqueElemCount];
   for(int i = 0; i < uniqueElemCount; ++i)
   {
       occurances[i] = 0;
   }
   for(int i = 0; i < uniqueElemCount; ++i)
   {
       for(int j = 0; j < n; ++j)
       {
           if(uniqueElems[i] == arr[j])
           {
               ++occurances[i];
           }
       }
   }
    for(int i = 0; i < uniqueElemCount; ++i)
   {
       std::cout << uniqueElems[i] << " has " << occurances[i] << " occurances " << std:: endl;
   }
   std::cout << std:: endl; 
   
    return 0;
}
