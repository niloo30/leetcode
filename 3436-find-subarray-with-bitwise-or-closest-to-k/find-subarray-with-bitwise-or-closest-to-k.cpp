class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {

        int n=nums.size();

        int closest=INT_MAX;
        set<int> feasible;

        for(int i=0;i<n;i++){

            int v=nums[i];

            set<int> new_feasible;

            for(int x:feasible){
                new_feasible.insert(x|v);
            }
            new_feasible.insert(v);

            feasible=new_feasible;

            for(int i:feasible){
                closest=min(closest,abs(k-i));
            }

        }


        return closest;
        
    }
};