/*Given a boolean matrix of size RxC where each cell contains either 0 or 1, 
modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.*/

class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
       int size_row = matrix.size();
       int size_col = matrix[0].size();     
        bool row[size_row];
        bool col[size_col];
        memset(row,false,sizeof(row));
        memset(col,false,sizeof(col));

        for(int i=0;i<size_row;i++)
        {
            for(int j=0;j<size_col;j++)
            {
                if(matrix[i][j]==1)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
         for(int i=0;i<size_row;i++)
        {
            for(int j=0;j<size_col;j++)
            {
                if(row[i]==1 || col[j]==1)
                {
                    matrix[i][j]=1;
                }
            }
        }
        // code here 
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
