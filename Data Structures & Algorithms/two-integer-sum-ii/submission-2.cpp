class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int low=0;
        int high=nums.size()-1;

        while(low < high)
        {
            if(nums[low]+nums[high]==target)
            {
                res.push_back(low+1);
                res.push_back(high+1);
                break;

            }
            else if(nums[low]+nums[high]>target)
            {
                high--;
            }
            else if(nums[low]+nums[high]<target)
            {
                low++;
            }
        }
        return res;
    }
};
