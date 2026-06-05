class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        int maxSum = 0;

        for(int i = 0; i < k; i++){
            sum += arr[i];
        }
        
       maxSum = sum;
       int lsum = sum;
       int rsum = 0;
       int j = n-1;
       while(k != 0){
        sum = sum - arr[k-1];
        lsum = sum;
        rsum += arr[j];
        
        maxSum = max(maxSum, lsum + rsum);
        j--;
        k--;
       }

       return maxSum;

        
    }
};