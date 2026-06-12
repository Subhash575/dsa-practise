class Solution {
public:
    
    int sumCal(vector<int>&arr, int k){
        if(k < 0) return 0;
        int n = arr.size();
        int oddCnt = 0, cnt = 0;
        int i = 0, j = 0;
        int res = 0;
        while(j < n){
            if(arr[j]%2 == 1) oddCnt+=1;

            while(oddCnt > k){
                if(arr[i]%2 == 1) oddCnt-=1;
                i+=1;
            }

            if(oddCnt <= k){
                res += (j-i+1);
            }

            j+=1;
        }

        return res;
    }




    int numberOfSubarrays(vector<int>& nums, int k) {

        int sum1 = sumCal(nums, k);
        int sum2 = sumCal(nums, k-1);
        return sum1-sum2;
    }
};