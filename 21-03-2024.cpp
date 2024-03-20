class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        // Code here
        queue<Node*>q;
        q.push(root);
        vector<int>ans;
        bool flag = true;
        while(!q.empty()){
            int size = q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                Node *temp = q.front();
                q.pop();
                v.push_back(temp->data);
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            if(flag)
            {
                for(int i=0;i<size;i++){
                    ans.push_back(v[i]);
                }
                flag = false;
            }
            else{
                for(int i=size-1;i>=0;i--){
                    ans.push_back(v[i]);
                }
                flag = true;
            }
        }
        return ans;
    }
};
