class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int sorted_index=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[sorted_index])
            {
                nums[sorted_index+1]=nums[j];
                sorted_index++;
            }
        }
        return sorted_index+1;
    }
};