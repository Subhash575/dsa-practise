class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        // This is the Better approach for  solving this problem without 
        // using the division
        // Here we build the prefix and suffix which have the multiple of
        // previous and current element.

        vector<int>prefix(n, 1);
        vector<int>suffix(n, 1);

        // Building prefix:-
        for(int i = 1; i < n; ++i)
            prefix[i] = prefix[i-1]*nums[i-1];
        
        for(int i = n-2; i >= 0; --i){
            suffix[i] = suffix[i+1]*nums[i+1];
        }

        vector<int>ans(n, 0);
        for(int i = 0; i < n; ++i){
            ans[i] = prefix[i]*suffix[i];
        }

        return ans;
        
    }
};