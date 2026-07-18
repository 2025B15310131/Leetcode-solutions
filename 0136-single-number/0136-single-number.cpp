class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sin = single number
        int sin = 0;
        for(int i = 0; i<nums.size(); i++){
            sin = sin ^ nums[i];
            
        }
        return sin;
    }
};