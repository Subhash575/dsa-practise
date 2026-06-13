class Solution {
public:

   int sumCal(vector<int>&arr, int k){
       if( k < 0) return 0;
       int n = arr.size();
       unordered_map<int, int>mpp;
       int cnt = 0;
       int i = 0, j = 0;
       while(j < n){
        mpp[arr[j]]+=1;

        // what is done in case of invalid.
        while(mpp.size() > k){
            mpp[arr[i]]-=1;
            if(mpp[arr[i]] == 0) mpp.erase(arr[i]);
            i++;
        }

        if(mpp.size() <= k){
            cnt += j-i+1;
        }

        j++;

       }

       return cnt;

   }



    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int sum1 = sumCal(nums, k);
        int sum2 = sumCal(nums, k-1);

        return sum1-sum2;
    }
};