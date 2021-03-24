class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool bo=false;
        for (int i = 0; i < matrix.size(); i++)
        {
        for (int j = 0; j < matrix[i].size(); j++)
            {
            if(matrix[i][j] == target)
            {
                bo= true;
            }   
            
        }
    }
        
        return bo;
}
};
