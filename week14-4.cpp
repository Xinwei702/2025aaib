///week14-4.cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int> left(m),up(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    left[i]=7;
                    up[j]=7;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(left[i]==7 || up[j]==7) matrix[i][j]=0;
            }
        }
    }
};
