class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();

        vector<int>hash(3, -1);
        int res = 0;
        for(int i = 0; i < n; i++){
            hash[s[i] -'a'] = i;
            if(hash[0] != -1 && hash[1] != -1 && hash[2] != -1){
                // We can opmit above if loop if the hash array value is -1 we
                // simply get = 0 , In result contribution.
                res  = res + 1 + min(hash[0], min(hash[1], hash[2]));
            }
        }
        return res;
        
    }
};