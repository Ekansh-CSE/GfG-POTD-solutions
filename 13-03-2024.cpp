class Solution
{
public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
        int n = mat.size(), m = mat[0].size(), i = 0, j = 0;
        vector<int> res;
        bool isUp = 1;
    
        for(int k = 0; k < m * n; ) 
        {
            if(isUp)
            {
                for(;i >= 0 and j < m; i--, j++) 
                {
                    res.push_back(mat[i][j]);
                    k++;
                }
                
                if(i < 0 and j < m)
                    i = 0;
                    
                if(j == m) 
                {
                    i += 2;
                    j--;
                }
            }
            else 
            {
                for(;j >= 0 and i < n; i++, j--) 
                {
                    res.push_back(mat[i][j]);
                    k++;
                }
                
                if(j < 0 and i < n)
                    j = 0;
                    
                if(i == n) 
                {
                    j += 2;
                    i--;
                }
            }
            
            isUp = !isUp;
        }
        
        return res;
    }
};
