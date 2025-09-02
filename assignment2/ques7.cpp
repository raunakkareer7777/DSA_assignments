#include <iostream>

using namespace std;

int main(){

   int i,j;
   int count;
   int A[] = {1,3,2,6,5,7};
   int size = sizeof(A)/4;
   for (i = 0; i < size; i++){
      for (j = i + 1; j < size; j++){

         if (i < j && A[i] > A[j]){
            count++;
         }
      }
   }
   cout << count << endl;
}
