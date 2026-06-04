class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int size= mat.size()*mat[0].size();
        if(size!= r*c|| (mat.size()==r&& mat[0].size()==c)) return mat;
        vector<vector<int>>newMat(r,vector<int>(c));
        int k=0, l=0;
        for( int i=0; i<mat.size(); i++){
            for (int j=0; j<mat[0].size(); j++){

                if(k<r&&l<c) {
                    newMat[k][l]=mat[i][j];
                    l++;
                }    
                if(k<r && l ==c){
                    k++;
                    l=0;
                }
                
            }
        }
        return newMat;
    }
};