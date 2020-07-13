class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> vec;
        int n = costs.size()/2;
        int cityA = 0, cityB = 0;
        int min = 0;
        for(vector<int> cost : costs)
        {
            min += cost[0];
            vec.push_back(cost[1] - cost[0]);
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < n; i++){
            min += vec[i];
        }
        return min;
    }
};
