class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size(); // stores the sizr of an array
        for(int i=0;i<n;i++){ // loop for the first number
            for(int j=i+1;j<n;j++){ // loop for second number after i
                if(nums[i]+nums[j]==target){   // checks if sum of two numbers equals to the target
                    return {i,j};   // return their indices
                }
            }
        }
        return {}; // if no pair is found safety return
    }
};
