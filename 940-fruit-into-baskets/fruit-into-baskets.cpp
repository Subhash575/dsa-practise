class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mpp;
        int maxLen = 0;
        int i = 0;
        int j = 0;
        while (j < n) {
            mpp[arr[j]] += 1;
            if (mpp.size() > 2) {
                mpp[arr[i]] -= 1;
                if (mpp[arr[i]] == 0)
                    mpp.erase(arr[i]);
                i += 1;
            }

            if (mpp.size() <= 2)
                maxLen = max(maxLen, j - i + 1);
            j++;
        }

        return maxLen;
    }
};