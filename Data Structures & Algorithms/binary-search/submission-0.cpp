class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long int low=0;
        long long int high=nums.size()-1;

        long long int mid;
        while(low <=high)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]<target)
            {
                low=mid+1;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
        }
        return -1;
    }
};
