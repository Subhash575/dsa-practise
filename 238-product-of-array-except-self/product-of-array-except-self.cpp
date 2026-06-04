class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int>ans(n, 0);
        int multi = 1;
        int count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0)
               count+= 1;

            if(count <= 1 && nums[i] != 0){
                multi = multi*nums[i];
            }
           
           
        }

        if(count > 1) return ans;

        for(int i = 0; i < n; i++){
            if(count == 1 && nums[i] == 0)
                ans[i] = multi;
            else if(count == 1 && nums[i] != 0)
                continue;
            else{
                ans[i] = multi/nums[i];
            }
        }

        return ans;
        
    }
};