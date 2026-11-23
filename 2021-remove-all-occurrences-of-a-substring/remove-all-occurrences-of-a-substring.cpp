class Solution {
public:
    string removeOccurrences(string s, string part) {
        string str = s;

        while(str.length() > 0 && str.find(part) < str.length()){
            int idx = str.find(part);
            str.erase(idx, part.length());
        }

        return str;
        
    }
};