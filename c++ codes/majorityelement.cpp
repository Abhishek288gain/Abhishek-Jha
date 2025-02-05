#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//using optimize methord (sorting)
int majorityElement(vector<int>& nums) {
        
  int n = nums.size();

  sort(nums.begin(), nums.end());// arranging the array in incresing order 

  int fq = 1, ans = nums[0];

  for(int i = 1; i < n; i++){

    if(nums[i] == nums[i - 1]){// for checking privious element in array
      fq++;

    } else {
      fq = 1;
      ans = nums[i];// if privious element is not same to the next 
                    //element then current value of nums array is store in ans
    }

    if( fq > n/2){

       return ans;
    }

  }
  
  return ans;
}

int main(){
  vector <int> nums = {3, 1, 1, 1, 6, 2, 2, 2, 2 };
    
    
 cout <<"majority element : "<< majorityElement(nums) <<endl;
    
    
  return 0;
}