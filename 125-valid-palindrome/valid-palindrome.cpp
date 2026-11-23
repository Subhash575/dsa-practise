class Solution {
public:

    bool alphaNum(char s){
        if(s >= 'A' && s <= 'Z')return true; 
        else if(s >= 'a' && s <= 'z') return true;
        else if(s >= '0' && s <= '9')return true;
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0;
        int end = s.size() -1;

        while(st < end){
            if(!alphaNum(s[st])){
                st++;
                continue;
            }
            if(!alphaNum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end])) return false;
            st++;
            end--;
        }

        return true;

        
    }
};