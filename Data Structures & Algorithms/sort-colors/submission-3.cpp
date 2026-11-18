class Solution {
public:
    void sortColors(vector<int>& nums) {
        //one way would be to use merge sort -->O(nlogn)
        // sorting function like sort() isnt allowed

        int low=0;
        int high=nums.size()-1;
        int mid=0;

        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[high],nums[mid]);
                high--;
            }

        }
    }
};