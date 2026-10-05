class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // optimize solution:- Moore Voting Algorithm
        int count = 0;
        int candidate = 0; //random value assign

        for(int val : nums){
            if(count == 0){
                candidate = val;
            }

            if(val == candidate) count++;
            else count--;
        }

        return candidate;
        
    }
};