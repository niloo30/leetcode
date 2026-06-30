class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {


        set<int> feasible,ans;


        for(auto& v:arr){
            
            set<int> new_feasible;

            for(int x:feasible){
                new_feasible.insert(x|v);
            }
            new_feasible.insert(v);

            feasible=new_feasible;


            for(int y:feasible)
            ans.insert(y);
            

        }
        return ans.size();
        
    }
};