#include <iostream>
#include <climits>

using namespace std;
                    
int main() {
    int arr[5] = {2, 4, 5 ,8 ,-3};

     int smallest = INT_MAX;
     int largest = INT_MIN;

     
    for (int i = 0; i < 5; i++){

        if(arr[i] < smallest){

            smallest = i;

        }
    } 

    for (int i = 0; i < 5; i++){

        if(arr[i] > largest){

            largest = i;

        }
    } 

      cout << smallest <<endl;
      cout << largest <<endl;
        
    return 0;
}