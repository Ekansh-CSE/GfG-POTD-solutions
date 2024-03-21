class Solution
{
    public:
    vector <int> diagonalSum(Node* root) {


        //to store the nodes with diagonal levels
        queue<pair<int,Node*>> q;
        
        // to store the sum at each diagonal level
        unordered_map<int, int> ans;

        q.push(make_pair(0,root));
        int count; //keeping track for the diagonal levels

        while(!q.empty())
        {
           Node* front = q.front().second;
           count = q.front().first;
           q.pop();
           while(front)
           {
               if(front -> left)
               {
                   // push node into queue with level 1 more than current level
                   q.push(make_pair(count + 1,front -> left));
               }
               // increment the sum at current level
               ans[count] += front -> data;
               front = front -> right;
           }
       }
    //   copying the solution in vector to return ans
       vector<int> final(count + 1);
       for(int i = 0; i <= count; i++)
       {
           final[i] = ans[i]; 
       }
       return final;
    }
};
