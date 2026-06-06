class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        if (n == 0 || n == 1)
            return n;
        
        unordered_map<char, int>mpp; //{char, index}
        int maxLen = 0;
        int i = 0;
        int j = 0;
        while(j < n){
            if(mpp.count(s[j]) > 0 && mpp[s[j]] >= i){
                i = mpp[s[j]] + 1;
                mpp[s[j]] = j;
                j++;
            }else{
                mpp[s[j]] = j;
                maxLen = max(maxLen, j-i+1);
                j++;
            }
        }

        return maxLen;
    }
};