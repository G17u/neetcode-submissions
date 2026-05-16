class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int top = len-1;
        int bottom = 0;

        int middle;
        while(top>=bottom){

            middle = bottom + (top-bottom)/2;

            if(nums[middle]==target){
                return middle;
            }else if(nums[middle]>target){
                top=middle - 1;
            }else if(nums[middle]<target){
                bottom=middle + 1;
            }
        }
        return -1;
    }
};
