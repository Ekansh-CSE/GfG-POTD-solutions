class Solution{
    public:
    int maxIndexDiff(int a[], int n) 
    { 
       int i=0,j=n-1;
       int ans = 0;
       
       while(i <= j){
           if(a[i]<=a[j]){
               ans = max(ans,j-i);
               i++;
               j = n-1;
           }
           else{
               j--;
           }
       }
       
       return ans;
    }
};
