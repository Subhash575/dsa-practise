class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxLen = 0, maxFreq = 0;
        int i = 0, j = 0;
        vector<int> hash(26, 0);

        while (j < n) {
            hash[s[j] - 'A'] += 1;
            maxFreq = max(maxFreq, hash[s[j] - 'A']);

            // Invalid updates
            while((j - i + 1) - maxFreq > k) {
                hash[s[i] - 'A'] -= 1;
                maxFreq = 0;
                for (int k = 0; k < 26; k++) {
                    maxFreq = max(maxFreq, hash[k]);
                }
                i += 1;
            }

            if ((j - i + 1)- maxFreq <= k) {
                maxLen = max(maxLen, j - i + 1);
            }

            j++;
        }

        return maxLen;
    }
};