class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total = 0;

        // Step 1: total sum
        for(int i = 0; i < nums.size(); i++) {
            total += nums[i];
        }

        int left = 0;

        // Step 2: check every index
        for(int i = 0; i < nums.size(); i++) {

            int right = total - left - nums[i];

            if(left == right) {
                return i;
            }

            left += nums[i];
        }

        return -1;
    }
};