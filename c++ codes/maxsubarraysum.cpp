#include <iostream>
#include <vector>
#include <climits>

using namespace std;

   //Brute force approach       
int main() {

  int arr[] = {2, -1, 5, -7, 4}; //maximum subarray sum is b/w 2, -1, 5
  int n = 5;

  int max_Sum = INT_MIN;
  
  for(int st = 0; st < n; st++){

    int current_Sum = 0; 
    for(int end = st; end < n; end++){// current sum is added to next term with the help of arr[end]
      
      current_Sum += arr[end];
      max_Sum = max(current_Sum, max_Sum);// for compare maxsum b/w cs and mxsum variable 
        
    }
  }
   cout <<" max subarray sum : " << max_Sum <<endl;


  
            
  return 0;
}