class Solution {
public:
    // Recursive approach
    int bs(vector<int>&arr, int low, int high, int target){

        if(low > high) return -1;

        int mid = low + (high -low)/2;
        if(arr[mid] == target) return mid;

        if(arr[mid] > target) return bs(arr, low, mid-1, target);
        else return bs(arr, mid+1, high, target);

    }

    int search(vector<int>& arr, int target) {
        return bs(arr, 0, arr.size()-1, target);
    }
};