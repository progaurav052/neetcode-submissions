class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>sn1;
        for(int i=0;i<nums.size();i++)
        {
            if(sn1.find(nums[i])!=sn1.end())
            {
                return true;
            }
            sn1.insert(nums[i]);

        }
        return false;
    }
};