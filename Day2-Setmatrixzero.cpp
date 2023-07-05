class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row[matrix.size()];
        for(int i=0;i<matrix.size();i++){
            row[i]=1;
        }
        int col[matrix[0].size()];
        for(int j=0;j<matrix[0].size();j++){
            col[j]=1;
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
         for(int k=0;k<matrix.size();k++){
            for(int l=0;l<matrix[0].size();l++){
                if(row[k]==0|| col[l]==0){
                    matrix[k][l]=0;
                }
            }
        }
        return;
    }
};