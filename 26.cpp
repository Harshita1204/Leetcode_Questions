class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;  //  for last unique element
        for(int j = 1; j < nums.size(); j++) {
            if(nums[i] != nums[j]) {
                i++;             
                nums[i] = nums[j]; // place new unique element , it copies the element
            }
        }
        return i + 1;  // total unique elements 
    }
};
