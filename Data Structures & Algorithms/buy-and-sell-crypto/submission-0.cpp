class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int t_max = 0;
        int t_min = prices[0];

        for(int i=1;i<len;i++){
            t_max = max(t_max,prices[i]-t_min);
            t_min = min(t_min,prices[i]);
        }
        return t_max;
    }
};
