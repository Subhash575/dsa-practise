class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // for solving this type of problem in linear time complexity we use the
        // XOR operator bcs same number cancel them self in XOR
        // (imp)-> Imp point to note in XOR order not matter.
        int n =  nums.size(); 
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans =  ans^nums[i];

        }
        return ans;
        
    }
};