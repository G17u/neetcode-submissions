class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int row;
        int col;
        int top=rows*cols-1;
        int bottom=0;
        int middle;

        while(bottom<=top){
            middle=bottom+(top-bottom)/2;
            row = middle/cols;
            col = middle%cols;
            if(matrix[row][col]<target){
                bottom=middle+1;
            }else if(matrix[row][col]>target){
                top=middle-1;
            }else{return true;}
        }
        return false;
    }
};
