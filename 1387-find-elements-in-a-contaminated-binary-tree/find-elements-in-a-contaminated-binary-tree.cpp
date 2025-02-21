
class FindElements {
public:
    unordered_set<int> st;
    // bool f(TreeNode* root,int x)
    // {
    //     if(root==nullptr)
    //     return false;

    //     if(root->val==x)
    //     return true;

    //     return f(root->left,x) || f(root->right,x);
    // }
    void solve(TreeNode* root,int x)
    {
        if(root==NULL)
        return ;

        root->val=x;
        st.insert(x);
        solve(root->left,2*x+1);
        solve(root->right,2*x+2);
    }
    FindElements(TreeNode* root) {

        solve(root,0);
        
    }
    
    bool find(int target) {
        
       if(st.find(target)!=st.end())
       return true;

       return false;

    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */