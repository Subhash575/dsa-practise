class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        int n = s.size();

        for(int i = 0; i < n; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                str += s[i];
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                str += (char)tolower(s[i]);
            }else if(s[i] >= '0' && s[i] <= '9'){
                str += s[i];
            }
                
        }

        int st = 0;
        int end = str.size()-1;

        while(st <= end){
            if(str[st] != str[end]) return false;
            st++;
            end--;
        }

        return true;
        
    }
};