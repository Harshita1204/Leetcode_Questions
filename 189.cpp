class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size()); // we are using temp because if we use the same array to do this process , it will overwrite it! so we are using temp to store it for temporary purpose
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        // copy temp into num vector
        nums = temp;
    
    }
};
