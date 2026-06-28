class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int actual_sum = 0;
        int expected_sum = n*(n+1)/2; // ths is the formula to calculate sum of the given n numbers
        for(int num:nums){
            actual_sum += num;
        }
        return expected_sum - actual_sum;
    }
};