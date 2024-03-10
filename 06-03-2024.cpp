class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            string s = pattern + "$" + text;
            int n = s.size();
            vector<int> z(n, 0), res;
            int l = 0, r = 0;
        
            for (int i = 1; i < n; i++)
            {
                if (i > r)
                {
                    l = r = i;
                    while (r < n and s[r - l] == s[r])
                        r++;
        
                    z[i] = r - l;
                    r--;
                }
                else
                {
                    int k = i - l;
        
                    if (z[k] < r - i + 1)
                        z[i] = z[k];
                    else
                    {
                        l = i;
                        while (r < n and s[r - l] == s[r])
                            r++;
                        z[i] = r - l;
                        r--;
                    }
                }
            }

            for(int i = 0; i<n; i++)
            {
                if(z[i] == pattern.size()) res.push_back(i - pattern.size());
            }
            
            return res;
   
        }
     
};
