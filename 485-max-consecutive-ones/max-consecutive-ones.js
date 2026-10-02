/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let maxOne = 0;
    let cnt = 0;
    let n = nums.length;

    for(let i = 0; i < n; i++){
        if(nums[i] == 1){
            cnt+=1;
            maxOne = maxOne > cnt ? maxOne:cnt;
        }else{
            cnt = 0;
        }
    }

    return maxOne;
    
};