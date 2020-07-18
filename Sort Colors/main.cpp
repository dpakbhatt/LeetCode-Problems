class Solution {
public:
    void sortColors(vector<int>& nums) {
        int length = nums.size();
        int temp;
        for(int i = 0; i < length; i++){
            for(int j=0; j < length-1; j++){
                if(nums[j] > nums[j+1]){
                    temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                }
            }
        }
    }
};
