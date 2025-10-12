
class Solution {
public:
    TreeNode* f(vector<int>& pre,vector<int>& in,int i,int j,int& idx)
    {
        if(idx>=in.size() || i>j)
        return NULL;
       

        TreeNode* root=new TreeNode(pre[idx]);
        int k=-1;
        for(int p=i;p<=j;p++)
        {
            if(pre[idx]==in[p])
            {
                k=p;
                break;
            }
        }
        idx++;
        root->left=f(pre,in,i,k-1,idx);
        root->right=f(pre,in,k+1,j,idx);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {


        int n=preorder.size();
        int idx=0;
        return f(preorder,inorder,0,n-1,idx);
        
    }
};