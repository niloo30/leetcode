class NumArray {
public:
    int n;
    vector<int> segTree;
    vector<int> nums;
    void bt(int i,int l,int r,vector<int>& nums,vector<int>& segTree) {

        if(l==r) {
            segTree[i]=nums[l];
            return ;
        }

        int mid=(l+r)/2;

        bt(2*i+1,l,mid,nums,segTree);
        bt(2*i+2,mid+1,r,nums,segTree);

        segTree[i] = segTree[2*i+1] + segTree[2*i+2];
    }

    NumArray(vector<int>& nums) {
        
        this->nums=nums;
        n=nums.size();
        segTree.resize(4*n+1);

        bt(0,0,n-1,nums,segTree);
        
        
    }
    void updateTree(int idx,int val,int i,int l,int r,vector<int>& nums,vector<int>& segtree) {
        
        if(l==r) {
            nums[l]=val;
            segtree[i]=val;
            return ;
        }

        int mid=(l+r)/2;

        if(idx<=mid)
        updateTree(idx,val,2*i+1,l,mid,nums,segTree);
        else
        updateTree(idx,val,2*i+2,mid+1,r,nums,segTree);

        segTree[i] = segTree[2*i+1] + segTree[2*i+2];

    }
    void update(int index, int val) {

        updateTree(index,val,0,0,n-1,nums,segTree);
        
    }
    int sumQuery(int start,int end,int i,int l,int r, vector<int>& segTree) {
        
        if(end< l || start>r)
        return 0;
        
        
        if(l>=start && r<=end) 
        return segTree[i];
        
        int mid=(l+r)/2;
        
        return sumQuery(start,end,2*i+1,l,mid,segTree)+sumQuery(start,end,2*i+2,mid+1,r,segTree);
        
        
    }
    int sumRange(int start, int end) {

        return sumQuery(start,end,0,0,n-1,segTree);
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */