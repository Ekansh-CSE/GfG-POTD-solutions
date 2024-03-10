class Solution{
public:	
	
int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
    {
        // Your code goes here
        int count=0;
        int j=0,i=0,k=0,l=0;
        while(i<n && l<n ){
            if(mat1[i][k]+mat2[n-l-1][n-j-1]>x){
                j++;
            }else if(mat1[i][k]+mat2[n-l-1][n-j-1]<x){
                k++;
            }else{
                count++;k++,j++;
            }
            if(k==n){
                i++,k=0;
            }
            if(j==n){
                l++,j=0;
            }
        }
        return count;
    }


};
