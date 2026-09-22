class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        // ex:- 1, 3, 4, 2, 2

        // starting pt
        int slow = nums[0];
        int fast = nums[0];

        // move one step ahead
        slow = nums[slow];
        fast = nums[nums[fast]];

        // detect the cycle
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }

        // starting one point at a time
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
    }
};