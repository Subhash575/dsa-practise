class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        // optimize approach:- Here we remove the inner-while loop by mentain
        //  the constant window after getting the extra zero
        int n = arr.size();
        int maxLen = 0;
        int i = 0, j = 0;
        int zeroCnt = 0;

        while (j < n) {
            if (arr[j] == 0)
                zeroCnt += 1;
            
            if(zeroCnt > k){
                if(arr[i] == 0)
                   zeroCnt-=1;
                i+=1;
            }

            if(zeroCnt <= k){
               maxLen = max(maxLen, j - i + 1);
            }

            j++;

        }

        return maxLen;    
    }
};