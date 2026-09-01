class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k_index=0;
        for(int j=1;j<nums.size();j++)
        {
               if(nums[j]!=nums[k_index])
               {
                nums[k_index+1]=nums[j];
                k_index++;
               }
        }
        return k_index+1;
    }
};