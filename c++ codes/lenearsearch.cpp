#include <iostream>
using namespace std;

int lenearsearch(int arr[], int size, int target ){

    for(int i = 0; i < size; i++){

        if ( arr[i] == target ){// this is the lenesr search algorithms
            
            return i;
        }
    }
    
    return -1;
}
                    
int main() {
    int arr[] = {3, 5, 6, 7, 3};
    int size = 5;

    int target = 6;
   
  cout << "the target index : "<< lenearsearch(arr, size, target) <<endl;;

  return 0;
}