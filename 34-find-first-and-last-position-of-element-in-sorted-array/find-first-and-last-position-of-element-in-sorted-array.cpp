class Solution {
public:

    int firstpos(vector<int>& nums,int target){
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int res = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                res = mid;
                r = mid - 1;
            }
            else if(target < nums[mid]){
                r = mid -1;
            }
            else{
                l = mid + 1;
            }
            
        }
        return res;
    }

    int lastpos(vector<int>& nums,int target){
        int n = nums.size();
        int l = 0;
        int r = n-1;
        int res = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                res = mid;
                l = mid +1;
            }
            else if(target < nums[mid]){
                r = mid -1;
            }
            else{
                l = mid + 1;
            }
            
        }
        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstpos(nums, target), lastpos(nums, target)};
        
    }
};