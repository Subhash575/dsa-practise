class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n != m) return false;

        unordered_map<char, int>mp1;
        unordered_map<char, int>mp2;

        for(int i = 0; i < n; i++)
            mp1[s[i]]+=1;
        
        for(int j = 0; j < m; j++)
            mp2[t[j]]+=1;

        for(auto &it: mp1){
            if(mp2[it.first] != it.second)
                return false;         
        }

        return true;
        
    }
};