#include <iostream>
#include <vector>

//using moories algorithm
using namespace std;

int  majorityElement(vector<int>& nums) {
 int n = nums.size();
 int fq = 0, ans = 0;

    for(int i = 0; i < n; i++){

        if(fq == 0){

         ans = nums[i];
        }
            
        if(ans == nums[i]){
         fq++;

        } else {
         fq--;
        }
           
    }
    return ans;
        
}


int main(){

 vector <int> nums = { 2, 4, 5, 5, 5};
 cout << "majority Element :"<<majorityElement(nums) << endl;
        
 return 0;
}
    
