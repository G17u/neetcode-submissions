class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         int len = numbers.size();
        
        int i=0;
        int j=len-1;
        int sum;
        while(i!=j){
            sum = numbers[i]+numbers[j];
            if(sum==target){
                break;
            }else if(sum<target){
                i++;
            }else if(sum>target){
                j--;
            }
        }
        vector<int> ans(2);
        i++;
        j++;
        ans[0]=i;
        ans[1]=j;
        return ans;
    }
};
