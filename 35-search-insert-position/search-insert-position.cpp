class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        int res = -1;
        
        int low = 0;
        int high = n-1;
        int mid;

        while(low <= high){
            mid = low + (high - low)/2;

            if(arr[mid] == target) return mid;
            else if(arr[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        if(res == -1){
            return lower_bound(arr.begin(), arr.end(), target) - arr.begin();
        }
        
        return res;
    }
};