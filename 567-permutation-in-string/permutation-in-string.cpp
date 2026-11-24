class Solution {
public:

    bool compare(int freq1[], int freq2[]){
        for(int i = 0; i < 26; i++){
            if(freq1[i] != freq2[i]) return false;
        }
        return true;

    }


    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();

        int freq[26] = {0};

        for(int i = 0; i < n1; i++){
            freq[s1[i]-'a']++;
        }

        int winSz = n1;
        for(int i = 0; i < n2; i++){
            // Here we use the window for creating the small window
            // of size s1 and we use idx to iterate over the small window.
            int winIdx = 0;
            int idx = i;
            int winFreq[26] = {0};
            while(winIdx < winSz && idx < n2){
                winFreq[s2[idx]-'a']++;
                winIdx++;
                idx++;
            }

            if(compare(freq, winFreq)) return true;
        }

        return false;
        
    }
};