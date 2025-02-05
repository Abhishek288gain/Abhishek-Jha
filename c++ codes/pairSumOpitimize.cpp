#include <iostream>
#include <vector>


using namespace std;

vector <int> pairSum(vector <int>& nums, int target){
    
    vector <int> ans;
    int n = nums.size();

    int i = 0, j = n-1;

    while(i < j){

        int PS = nums[i] + nums[j];

        if(PS > target){
            j--;

        } else if (PS < target){
            i--;

        } else {

            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;

        }
    }
}
                    
int main() {
    vector <int> nums = {1, 4, 5, 6, 7, 9};
    int target = 16;

    vector <int> ans = pairSum(nums, target);

    cout << " psir Sum index equivalent to target :" << ans[0] << ", "<< ans[1]<<endl;
            
  return 0;
}