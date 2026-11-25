class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        string s = "";
        for(int i = 0; i < n; i++){
           char ch = chars[i];
           int count = 0;
           while(i < n && ch == chars[i] ){
                count++;
                i++;
           }
           if(count == 1) s = s + ch;
           else if(count > 1 && count < 10) s = s + ch + to_string(count);
           else if(count >= 10) s = s + ch + to_string(count);
            i-=1;
        }
       

        // string s = "";
        // for(auto & it: mpp){
        //     if(it.second == 1){
        //         s = s + it.first;
        //     }else if(it.second > 1 && it.second < 10){
        //         s = s + it.first + to_string(it.second);
        //     }else if(it.second >= 10){
        //         s = s + it.first + to_string(it.second);
        //     }

        // }
        
        int sz = chars.size();
        for(int i = 0; i < sz; i++){
            if(i < s.size()){
                chars[i] = s[i];
            }else{
                chars.pop_back();
            }
            
        }
       
        
        return chars.size();
        
    }
};