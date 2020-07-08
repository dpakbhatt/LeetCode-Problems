class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            area = max(area, (j-i)*min(height[i], height[j]));
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
        /*
        int max = 0;
        int area = 0;
        for(int i = 0; i < height.size(); i++){
            for(int j = i+1; j < height.size(); j++){
                if(height[i] > height[j]){
                    int area = height[j] * (j-i);
                    if(max < area){
                        max = area;
                    }
                }else{
                    int area = height[i] * (j-i);
                    if(max < area){
                        max = area;
                    }
                }
            }
        }
        return max;
        */
    }

};
