class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int maxLen = 0;
        int zeroCnt = 0;
        int i = 0, j = 0;
        while(j < n){
            if(nums[j] == 0) zeroCnt+=1;
            if(zeroCnt <= k){
                maxLen = max(maxLen, j - i + 1);
            }else {
                if(nums[i] == 0){
                    zeroCnt -=1;
                }
                i++;     
            }
            j++;
        }
        
        return maxLen;
    }
};