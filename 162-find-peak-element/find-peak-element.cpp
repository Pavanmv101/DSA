class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int ed = nums.size()-1;
        int mid;
        while(st<ed){
             mid= st+(ed-st)/2;
            if(nums[mid]>nums[mid + 1]){
                ed = mid;
            }
            else{
                st=mid+1;
            }
        }
        return st;
    }
};