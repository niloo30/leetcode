
class Solution {
public:
    TreeNode* getSucc(TreeNode* curr)
    {
        curr=curr->right;
        while(curr and curr->left)
        {
            curr=curr->left;
        }
        return curr;
    }
    TreeNode* del(TreeNode* root,int key)
    {
        if(root==NULL)
        return NULL;

        if(root->val > key)
        {
            root->left=del(root->left,key);
        }
        else if(root->val < key)
        {
            root->right=del(root->right,key);
        }
        else // key to be deleted 
        {
            if(root->left==NULL)
            {
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL)
            {
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            else //when the node has both the children 
            {
                TreeNode* succ=getSucc(root);
                root->val=succ->val;
                root->right=del(root->right,succ->val);
                
            }

        }
        return root;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {

        return del(root,key);
        
    }
};