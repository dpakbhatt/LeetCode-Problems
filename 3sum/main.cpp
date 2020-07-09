class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        set<vector<int>>s;
        for(int i = 0; i < n-2; i++){
            int l = i+1;
            int r = n-1;
            int x = nums[i];
            while(l < r){
                if(x + nums[l] + nums[r] == 0){
                    s.insert({x,nums[l++],nums[r--]});
                }else if(x + nums[l] + nums[r] < 0){
                    l++;
                }else {
                    r--;
                }
            }
        }
        for(auto x: s){
            triplets.push_back(x);
        }
        return triplets;
    }
};
