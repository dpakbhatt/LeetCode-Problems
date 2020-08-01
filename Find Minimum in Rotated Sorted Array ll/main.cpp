class Solution {
public:
    int findMin(vector<int>& nums) {
        int min1 = INT_MAX;
        int size1 = nums.size();
        for(int i= 0; i < size1; i++){
            if(nums[i] < min1){
                min1 = nums[i];
            }
        }
        return min1;
    }
};
