class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int nums_size= nums.size();

        for(int i=0;i<2*nums.size();i++)
        {
            ans.push_back(nums[i%nums_size]);
        }
        return ans;
    }
};