class Solution {
public:
    int search(vector<int>& arr, int target) {
        // iterative approach
        int n = arr.size();
        int low = 0, high = n-1;
        int mid;
        while(low <= high){
            mid = low + (high-low)/2;
            if(arr[mid] == target) return mid;
            else if(arr[mid] > target) high = mid-1;
            else low = mid + 1;
        }
        return -1;  
    }
};