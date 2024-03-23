class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>get;
        while(!st.empty())
        {
            get.push(st.top());
            st.pop();
        }
         st.push(x);
         while(!get.empty())
         {
             st.push(get.top());
             get.pop();
         }
        return st;}
    };
