class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        int len = s.length();
        while(r--){
            string sub="";
            for(int i=0; i<=n; i++){
                if(s[i] == '0')
                    sub+= "01";
                else
                    sub+= "10";
            }
            s = sub;
        }
        return s[n];
    }
};
