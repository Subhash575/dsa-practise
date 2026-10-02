class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        
        revArr(nums, 0, n-1);
        revArr(nums, 0, k-1);
        revArr(nums, k, n-1);

    }
    
    void revArr(vector<int>& arr, int s, int e){
        while(s < e){
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }

};