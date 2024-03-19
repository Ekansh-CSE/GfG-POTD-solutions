class Solution
{
public:
    pair<int,int>solve(Node*root){
        if(!root){
            return {0,0};
        }
        pair<int,int> t1 = solve(root->left);
        pair<int,int> t2 = solve(root->right);
        if(t1.second > t2.second){
            return {t1.first+root->data,1+t1.second};
        }
        else if(t1.second < t2.second){
            return {t2.first+root->data,1+t2.second};
        }
        else{
            return {max(t1.first,t2.first)+root->data,1+t2.second};
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        return solve(root).first;
    }
};
