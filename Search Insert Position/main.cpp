class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length = nums.size();
        int index;
        for(int i = 0; i < length; i++){
            if(nums[i] == target){
                index = i;
                break;
            }
        }for(int j = 0; j < length; j++){
            if(nums[0] > target ){
                index = 0;
                break;
            }else if(nums[length -1] < target){
                index = length;
                break;
            }else if(nums[j] < target && target < nums[j+1]){
                index = j+1;
                break;
            }
        }
        return index;
    }
};
