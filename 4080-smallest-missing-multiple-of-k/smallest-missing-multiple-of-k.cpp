class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // Optimize solution:- using unordered set, and checking
        // multiple count exist in there or not.
        unordered_set<int>st (nums.begin(), nums.end());

        int multi = k;
        while(st.count(multi)){
            // updating to next multiple
            multi += k;
        }
        return multi;
        
    }
};