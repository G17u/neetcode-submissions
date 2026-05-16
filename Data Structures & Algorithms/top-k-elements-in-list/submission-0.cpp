class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<pair<int,int>> ist(2001);
        int len = nums.size();
        for(int i = 0;i<2001;i++){
            ist[i].first=0;
            if(i<=1000){
                ist[i].second=i;
            }else{
                ist[i].second=i-2001;
            }
            
        }

        
        for(int i=0;i<len;i++){
            if(nums[i]>=0){
                ist[nums[i]].first++;
            }else{
                ist[nums[i]+2001].first++;
            }
        }
        sort(ist.begin(),ist.end());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(ist[2000-i].second);
        }
        return ans;

    }
};
