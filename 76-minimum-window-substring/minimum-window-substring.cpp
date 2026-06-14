class Solution {
public:
    string minWindow(string s, string t) {
        //optimize approach
        int n = s.size();
        int k = t.size();
        unordered_map<char, int>mpp;
        for(char &it : t){
           mpp[it]+=1; 
        }

        int minLen = INT_MAX, startIdx = -1, cnt = 0;
        int i = 0, j = 0;

        while(j < n){
            if(mpp[s[j]] > 0){
                cnt+=1;
            }
            mpp[s[j]]-=1;

            while(cnt == k){
                if(minLen > j-i+1){
                    minLen = j-i+1;
                    startIdx = i;
                }
               
                // Iteration done later. First initially index
                mpp[s[i]]+=1;
                if(mpp[s[i]]  == 1){
                    cnt-=1;
                }
                i+=1;
               
            }
            j++;
        }

        if(startIdx == -1) return "";
        return s.substr(startIdx, minLen);
    }
};