class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int n = nums.size();
        int total = 0;
        for(int i =0; i<n;i++){
            total += nums[i];

            
        }
        int left = 0;
        int right =0;
        for(int i =0;i<n;i++){
           left = left + nums[i];
            right = total - left - nums[i];

             if(left==total){
            return i;

            

            


        }
        left+= nums[i];
       
        }
        return -1;

    }
};