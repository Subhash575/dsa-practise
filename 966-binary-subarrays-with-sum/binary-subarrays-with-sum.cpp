class Solution {
public:

    int subarryCal(vector<int>&arr, int goal){
        // optimize solution
        if(goal < 0) return 0;
        int n = arr.size();
        int sum = 0, cnt = 0;
        int i = 0, j = 0;
        while(j < n){
            sum += arr[j];
            while(sum > goal){
                sum -= arr[i];
                i +=1;
            }

            if(sum <= goal){
                cnt = cnt + (j-i+1);
            }
            j++;
        }

        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
       
        // let say goal == 2, Here we are going to find:- sum <= 2 and
        // sum <= goal-1 ==> sum <= 1. If we subtract both than we get
        //  sum == goal.
        int sum1 = subarryCal(nums, goal);
        int sum2 = subarryCal(nums, goal-1);

        return sum1-sum2;
        
    }
};