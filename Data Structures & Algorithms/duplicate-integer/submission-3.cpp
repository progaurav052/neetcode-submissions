class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>uset;
        for(int i=0;i<nums.size();i++)
        {
            if(uset.find(nums[i])!=uset.end())
            {
                return true;
            }
            uset.insert(nums[i]);
        }
        return false;
    }
};