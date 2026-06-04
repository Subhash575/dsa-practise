class Solution {
public:
    bool isAnagram(string s, string t) {
        // optimize approach to solve anagram
        int n = s.size();
        int m = t.size();

        if(n != m) return false;

        vector<int>count(26, 0);

        for(int i = 0; i < n; i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for(int it : count){
            if( it != 0) return false;
        }

        return true;
    }
};