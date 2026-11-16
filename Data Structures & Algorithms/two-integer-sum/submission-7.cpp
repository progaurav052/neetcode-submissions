class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       unordered_map<int,int>u_map;
        vector<int>res_idx;
        for(int i=0;i<nums.size();i++)
        {
            if(u_map.find(target - nums[i]) != u_map.end())
            {
                auto it = u_map.find(target-nums[i]);
                res_idx.push_back(it->second);
                res_idx.push_back(i);
                break;
               
            }
             u_map.insert({nums[i],i});
            
        }

        return res_idx;
    }
};
