class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r1=0, r2=matrix.size()-1, c1=0, c2= matrix[0].size()-1;
        vector<int>newMat;
        while(r1<=r2 && c1<=c2){
            int i=c1;
            while(i<=c2){
                newMat.push_back(matrix[r1][i]);
                i++;
            }
            r1++;
            i=r1;
            while(i<=r2){
                newMat.push_back(matrix[i][c2]);
                i++;
            }
            c2--;
            i=c2;
            while(i>=c1 && r1<=r2 ){
                newMat.push_back(matrix[r2][i]);
                i--;
            }
            r2--;
            i=r2;
            while(i>=r1 && c1<=c2){
                newMat.push_back(matrix[i][c1]);
                i--;
            }
            c1++;

        }
        return newMat;

    }
};