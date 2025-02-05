#include <iostream>
using namespace std;

void reverse(int arr[], int size){

    int start = 0, end = size - 1;//this veriable helps for swaping from 0 to size - 1 index

    while(start < end) {// for stoping the loop when array is even or odd

      swap(arr[start], arr[end]);

      start++;
      end--;
    }
}
                    
int main() {

   int arr[] = {3, 5, 6, 4, 9};
   int size = 5;
   
   reverse(arr, size);

   cout <<  "reverse array" << endl;

   for(int i = 0; i < size; i++ ){
    cout << arr[i] <<"  ";

   }
   
   cout << endl;

  return 0;
}