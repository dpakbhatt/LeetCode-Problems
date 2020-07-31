class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> single;
        int count;
        int size1 = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i < size1; i++){
            count = 0;
            for(int j=0; j <size1; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count == 1){
                single.push_back(nums[i]);
            }
        }
        return single;
    }
};
