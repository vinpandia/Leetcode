class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max =0;
        int count=0;
        for(int i =0;i<n;i++){
            if(nums[i]==1){
                count++;
                if(max<count){
                max = count;
                }
            }
            else{
                count = 0;
            }
        }
        
        
        
        
        
        return max;
        
    }
};