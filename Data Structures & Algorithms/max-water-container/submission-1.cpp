class Solution {
public:
    int maxArea(vector<int>& heights) {
        int len = heights.size();
        int i=0;
        int j=len-1;
        
        int maxwater = 0;
        int base, wall;
        while(i!=j){
            base = j - i;
            wall = min(heights[i], heights[j]);
            maxwater = max(maxwater, wall*base);
            if(heights[i]<heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxwater;
    }
};
