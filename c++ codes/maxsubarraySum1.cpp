#include <iostream>
#include <vector>// the implimentation of vector is alreadi write in this header file
#include <climits>// for INT_MIN = -(infinity)
using namespace std;

int maxsubarraySum(vector <int> nums){
    int currSum = 0, maxSum = INT_MIN;

    for(int val: nums){

        currSum += val;//adding array element in currSum 
        maxSum = max(currSum, maxSum);

        if(currSum < 0){//during the addition if sum is 0 then reset to currSum = 0;
            currSum = 0;
        }

    }
    return maxSum;

}

int main(){
    vector <int> nums = {5, 6, -7, -8, 4};
   cout <<" Maximum subarray Sum: "<< maxsubarraySum(nums)<< endl;
}
        
    