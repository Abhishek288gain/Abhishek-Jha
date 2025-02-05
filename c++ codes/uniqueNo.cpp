#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {

  int ans = 0;

  for(int val: nums){

    ans ^= val; //for taking Xor of array no. and check if no. is same then n^n = 0 or n^0 = n
    
  } 

  return ans;
}


                    
int main() {

  vector <int> nums = {4, 5, 4, 5, 3};
  cout << "unique number : "<< singleNumber(nums) <<endl;

            
  return 0;
}