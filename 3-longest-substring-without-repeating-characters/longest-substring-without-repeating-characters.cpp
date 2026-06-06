class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // using hash array:-> For better optimization
        int n = s.size();
        if (n == 0 || n == 1)
            return n;
        
        vector<int>hash(256, -1);
        //{char(Ascii-value), index}

        int maxLen = 0;
        int i = 0;
        int j = 0;
        while(j < n){
            if(hash[s[j]] != -1 && hash[s[j]] >= i){
                i = hash[s[j]] + 1;
                hash[s[j]] = j;
                j++;
            }else{
                hash[s[j]] = j;
                maxLen = max(maxLen, j-i+1);
                j++;
            }
        }

        return maxLen;
    }
};