class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int multi = k;
        int n = nums.size();

        int res = -1;
        int cnt = 1;

        while(true){
            
            int i = 0;
            bool isExist = false;
            while(i < n){
                if(nums[i] == multi){
                    isExist = true;
                    cnt+=1;
                    break;
                }
                   
               i++;    
            }

            if(isExist == false){
                res = multi;
                break;
            }else{
                multi = k*cnt;
            }

        }

        return res;
    }
};