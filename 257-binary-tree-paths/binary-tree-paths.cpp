
class Solution {
public:
    vector<string> ans;
    void rec(TreeNode* root,string s){
        if(!root)
        return ;

        if(root->left==nullptr and root->right==nullptr){
            s+=to_string(root->val);
            ans.push_back(s);
            return ;
        }

        string t=to_string(root->val)+"->";
        s+=t;
        rec(root->left,s);
        rec(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {

        rec(root,"");
        return ans;
        
    }
};