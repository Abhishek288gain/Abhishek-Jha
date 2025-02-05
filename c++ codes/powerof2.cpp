#include <iostream>
#include <climits>
using namespace std;

int indexprint(int arr[], int size){

    int smallest = INT_MAX;
   

   for( int i = 0; i < size; i++){

     smallest = min(smallest, arr[i]);
    
   }

    if (arr[i] == smallest ) {

       return i;

    } 
    return -1;
}

int indexp(int arr[], int size){

    int largest = INT_MIN;

   for( int i = 0; i < size; i++){

    
    
     largest = max(largest, arr[i]);
   }

    if (arr[i] == largest ) {

       return i;

    } 
    return -1;
}

int main (){
   int arr[] = {1, 3, 54, 65, -3 };
   int size = 5;
   
   int a = indexprint(arr , size);
   int b = indexp(arr, size);

   cout << a <<endl << b<<endl;
  

   
    return 0;
}