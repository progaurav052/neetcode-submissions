class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result_indices;
        unordered_map<int,int>umap;
        umap.insert({nums[0],0});
        for(int i=1;i<nums.size();i++)
        {
            
            
                auto it = umap.find(target-nums[i]);
                if(it != umap.end())
                {
                 result_indices.push_back(it->second);
                 result_indices.push_back(i);
                 break;  
                }
                umap.insert({nums[i],i});
                
            
        }

        return result_indices;

    }
};
