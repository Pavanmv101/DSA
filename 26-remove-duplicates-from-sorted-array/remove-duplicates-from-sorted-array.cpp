class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        if (nums.size() == 1) return 1;

        int count = 0;
        int i = 0;
        int k = 0;

        while (i < nums.size()) {
            count++;
            int j = i + 1;

            while (j < nums.size() && nums[i] == nums[j]) {
                j++;
            }

            if (j < nums.size()) {
                k++;
                nums[k] = nums[j];
            }

            i = j;
        }

        return count;
    }
};