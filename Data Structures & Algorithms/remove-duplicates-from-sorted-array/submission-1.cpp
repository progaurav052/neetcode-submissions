class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // array 
        // sorted 
        // Remove duplicates --> all these indicate towards 2 pointer
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[j]!=nums[i])
            {
                nums[i+1]=nums[j];
                i++;

            }

        }
        return i+1;

    }
};