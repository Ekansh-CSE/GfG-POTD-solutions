class Solution{
public:	
	bool sameFreq(string s)
    {
        vector<int> mp(26,0);
        for(auto i:s)
        {
            mp[i-'a']=mp[i-'a']+1;
        }
       
       int f=mp[s[0]-'a'];
       int count=0;
       
       for(int i=0;i<26;i++)
       {
           if(mp[i]>0  && f!=mp[i]){
               if(abs(mp[i]-f)==1)
               {
                   count++;
                   if(count==2){
                   return false;
                   }
               }
               else if(abs(mp[i]-f)!=1)
               {
                   return false;
               }
        }
       }
       return true;
    }
};
