class Solution{
public:
    string removeDuplicates(string str) {
        // code here
        unordered_set<char> s;
        string ans = "";
        
        for(int i = 0; i < str.length(); i++){
            if(s.find(str[i]) == s.end()){
                ans += str[i];
                s.insert(str[i]);
            }
            
            else
            continue;
        }
        return ans;
    }
};
