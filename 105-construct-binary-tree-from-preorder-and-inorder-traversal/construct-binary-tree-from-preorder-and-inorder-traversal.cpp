
class Solution {
public:
    TreeNode* rec(vector<int>& pre,vector<int>& in,int s,int e,int& idx){
        if(s>e)
        return nullptr;

        int rootVal=pre[idx];
        int i=s;
        for(;i<e;i++){
            if(in[i]==rootVal){
                break;
            }
        }
        idx++;
        TreeNode* root=new TreeNode(rootVal);
        root->left=rec(pre,in,s,i-1,idx);
        root->right=rec(pre,in,i+1,e,idx);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n=inorder.size();

        int idx=0;

        return rec(preorder,inorder,0,n-1,idx);
        
    }
};