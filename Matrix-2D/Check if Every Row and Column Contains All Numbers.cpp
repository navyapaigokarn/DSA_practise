class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            set<int>row_set;
            for(int j=0;j<n;j++)
            {
                row_set.insert(matrix[i][j]);
            }
            if(row_set.size()!=n)
            {
                return false;
            }
        }
        
        for(int j=0;j<n;j++)
        {
            set<int>col_set;
            for(int i=0;i<n;i++)
            {
                col_set.insert(matrix[i][j]);
            }
            if(col_set.size()!=n)
            {
                return false;
            }
        }
        return true;
    }
};
