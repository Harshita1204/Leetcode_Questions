class Solution {
public:
    bool check(vector<int>& nums) {
        int count =0;
        int n= nums.size();
        for(int i=1;i<n;i++){ // i=1 bcz if i= 0 , nums[i-1]  condition will give error as i-1 -> 0-1 -> -1
            if(nums[i-1]>nums[i]){
                count ++;
            }
        }
        if(nums[n-1]>nums[0]) // this one will check for the cyclic rotation one , last element with first
        count ++;
        return count <= 1; // checks if only one pair of the above condition exists or if its zero, if more-> then return false
    }
};
