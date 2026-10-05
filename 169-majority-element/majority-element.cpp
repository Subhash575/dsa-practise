class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mpp;
        int res = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            mpp[nums[i]]+=1;
        }

        for(auto & it: mpp){
            if(cnt < it.second){
                res = it.first;
                cnt = it.second;
            }
        }

        return res;
        
    }
};